struct TouchEvent {
  bool pressedEdge;   // true somente no instante que tocou
  bool pressed;       // true enquanto está pressionado
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

  uint16_t x, y;
  bool nowPressed = tft.getTouch(&x, &y);

  ev.pressed = nowPressed;
  ev.x = x;
  ev.y = y;

  const uint32_t now = millis();
  if (nowPressed && !lastPressed && (now - lastEdgeMs) >= debounceMs) {
    ev.pressedEdge = true;   // Dispara no toque
    lastEdgeMs = now;
  }

  lastPressed = nowPressed;
  return ev;
}

struct Btn {
  uint8_t tela;
  int16_t x, y, w, h;
  char cmd;
  int8_t nextTela;
};

static const Btn buttons[] PROGMEM = {
  // -------- Tela 0 (Menu) --------
  {0,   0,   0, 160,120, 0,  1}, // SOM
  {0, 160,   0, 160,120, 0,  2}, // APPs
  {0,   0, 120, 160,120, 0,  3}, // PC
  {0, 160, 120, 160,120, 0,  4}, // OBS

  // -------- Tela 1 (SOM) --------
  {1,   4,   4, 101, 75, 'u', -1}, // Prev
  {1, 109,   4, 102, 75, 'v', -1}, // Play/Pause
  {1, 215,   4, 101, 75, 'w', -1}, // Next
  {1, 162,  83, 154, 75, 'x', -1}, // Volume Up
  {1,   4,  83, 154, 75, 'z', -1}, // Volume Down
  {1, 241, 162,  75, 75, 'y', -1}, // Mute
  {1,   4, 162,  75, 75,  0,  0},  // Back -> Menu

  // -------- Tela 2 (Apps) --------
  {2, 109,   4, 102,114, 'p', -1}, // Task Manager
  {2, 215, 122, 101,114, 'q', -1}, // Calculator
  {2, 215,   4, 101,114, 'r', -1}, // Explorer
  {2, 109, 122, 102,114, 's', -1}, // Mail
  {2,   4,   4, 101,114, 't', -1}, // Browser
  {2,   4, 162,  75, 75,  0,  0},  // Back -> Menu

  // -------- Tela 3 (PC) --------
  {3, 215, 122, 101,114, 'n', -1}, // Brightness Up
  {3, 109, 122, 102,114, 'N', -1}, // Brightness Down
  {3, 215,   4, 101,114, 'l', -1}, // Power Off
  {3, 109,   4, 102,114, 'm', -1}, // Sleep/Standby
  {3,   4,   4, 101,114, 'o', -1}, // Lock
  {3,   4, 162,  75, 75,  0,  0},  // Back -> Menu

  // -------- Tela 4 (OBS) --------
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

  // Botão de voltar
  {4,   4, 162,  75, 75,  0,  0},  // Back -> Menu
};

static const size_t BTN_COUNT = sizeof(buttons) / sizeof(buttons[0]);

void toque() {
  TouchEvent ev = readTouchEdge(90);
  if (!ev.pressedEdge) return;

  Btn b; // Buffer temporário para ler da PROGMEM
  
  for (size_t i = 0; i < BTN_COUNT; i++) {
    // Copia o botão da PROGMEM para RAM
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
