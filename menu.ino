//projeto em https://github.com/thedanniel/DeckCaseiro

#include <SPI.h>
#include <TFT_eSPI.h>
#include <JPEGDecoder.h>
#include <FS.h>
#include <SD.h>
#include "USB.h"
#include "USBHIDConsumerControl.h"
USBHIDConsumerControl ConsumerControl;
#include "USBHIDKeyboard.h"
USBHIDKeyboard Keyboard;
#include "USBHIDSystemControl.h"
USBHIDSystemControl SystemControl;
#include "esp_sleep.h"

TFT_eSPI tft = TFT_eSPI();

int tela = 0;

#define TOUCH_IRQ_PIN 18

static uint32_t lastTouchMs = 0;
static const uint32_t IDLE_SLEEP_MS = 60UL * 1000UL;


void setup() {
  pinMode(TOUCH_IRQ_PIN, INPUT_PULLUP);
  lastTouchMs = millis();

  USB.begin();
  Keyboard.begin();
  SystemControl.begin();
  ConsumerControl.begin();

  delay(1500);

  tft.begin();
  tft.setRotation(1);
  uint16_t calData[5] = { 197, 3488, 330, 3451, 1 };
  tft.setTouch(calData);

  delay(1500);

  sdBegin();

  renderTela(0);
  digitalWrite(TFT_BL, HIGH);
}

void loop() {
  toque();
  if (millis() - lastTouchMs > IDLE_SLEEP_MS) {
    entrarDeepSleepPorInatividade();
  }
}
