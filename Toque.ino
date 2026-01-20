#include <Arduino.h>
#include <pgmspace.h>

struct TouchEvent {
  bool pressedEdge;
  bool pressed;
  uint16_t x;
  uint16_t y;
};

static inline bool inRect(uint16_t x, uint16_t y, int x0, int y0, int w, int h) {
  return (x >= x0 && x < (x0 + w) && y >= y0 && y < (y0 + h));
}

static TouchEvent readTouchEdge(uint32_t debounceMs = 90) {
  static bool lastPressed = false;
  static uint32_t lastEdgeMs = 0;

  TouchEvent ev{false, false, 0, 0};

  // Gate opcional via IRQ (se definido)
  // Se TOUCH_IRQ_PIN estiver HIGH (sem toque), evita getTouch()
  #ifdef TOUCH_IRQ_PIN
  if (digitalRead(TOUCH_IRQ_PIN) != LOW) {
    lastPressed = false;
    return ev;
  }
  #endif

  uint16_t x, y;
  bool nowPressed = tft.getTouch(&x, &y);

  ev.pressed = nowPressed;
  ev.x = x;
  ev.y = y;

  const uint32_t now = millis();
  if (nowPressed && !lastPressed && (now - lastEdgeMs) >= debounceMs) {
    ev.pressedEdge = true;
    lastEdgeMs = now;
  }

  lastPressed = nowPressed;
  return ev;
}

struct Btn {
  uint8_t tela;
  int16_t x, y, w, h;
  char cmd;       // 0 = sem comando
  int8_t nextTela; // -1 = não muda
};

static const Btn buttons[] PROGMEM = {
  // Tela 0 (Menu)
  {0,   0,   0, 160,120, 0,   1},
  {0, 160,   0, 160,120, 0,   2},
  {0,   0, 120, 160,120, 0,   3},
  {0, 160, 120, 160,120, 0,   4},

  // Tela 1 (SOM)
  {1,   4,   4, 101, 75, 'u', -1},
  {1, 109,   4, 102, 75, 'v', -1},
  {1, 215,   4, 101, 75, 'w', -1},
  {1, 162,  83, 154, 75, 'x', -1},
  {1,   4,  83, 154, 75, 'z', -1},
  {1, 241, 162,  75, 75, 'y', -1},
  {1,   4, 162,  75, 75, 0,    0},

  // Tela 2 (Apps)
  {2, 109,   4, 102,114, 'p', -1},
  {2, 215, 122, 101,114, 'q', -1},
  {2, 215,   4, 101,114, 'r', -1},
  {2, 109, 122, 102,114, 's', -1},
  {2,   4,   4, 101,114, 't', -1},
  {2,   4, 162,  75, 75, 0,    0},

  // Tela 3 (PC)
  {3, 215, 122, 101,114, 'n', -1},
  {3, 109, 122, 102,114, 'N', -1},
  {3, 215,   4, 101,114, 'l', -1},
  {3, 109,   4, 102,114, 'm', -1},
  {3,   4,   4, 101,114, 'o', -1},
  {3,   4, 162,  75, 75, 0,    0},

  // Tela 4 (OBS)
  {4,   4,   4,  75, 75, 'a', -1},
  {4,  83,   4,  75, 75, 'b', -1},
  {4, 162,   4,  75, 75, 'c', -1},
  {4, 241,   4,  75, 75, 'd', -1},
  {4,   4,  83,  75, 75, 'e', -1},
  {4,  83,  83,  75, 75, 'f', -1},
  {4, 162,  83,  75, 75, 'g', -1},
  {4, 241,  83,  75, 75, 'h', -1},
  {4,  83, 162,  75, 75, 'k', -1},
  {4, 162, 162,  75, 75, 'i', -1},
  {4, 241, 162,  75, 75, 'j', -1},
  {4,   4, 162,  75, 75, 0,    0},
};

static const size_t BTN_COUNT = sizeof(buttons) / sizeof(buttons[0]);

extern uint32_t lastTouchMs; 

void toque() {
  TouchEvent ev = readTouchEdge(90);
  if (ev.pressed) {                 // ou ev.pressedEdge, se preferir só “toque novo”
    lastTouchMs = millis();
  }
  if (!ev.pressedEdge) return;

  Btn b;
  for (size_t i = 0; i < BTN_COUNT; i++) {
    memcpy_P(&b, &buttons[i], sizeof(Btn));
    if (b.tela != tela) continue;
    if (!inRect(ev.x, ev.y, b.x, b.y, b.w, b.h)) continue;

    if (b.nextTela >= 0) {
      tela = b.nextTela;
      renderTela(tela);
    }
    if (b.cmd) botao(b.cmd);
    return;
  }
}
