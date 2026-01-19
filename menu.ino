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

TFT_eSPI tft = TFT_eSPI();

int tela = 0;

void setup() {
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
}

void loop() {
  toque();
}
