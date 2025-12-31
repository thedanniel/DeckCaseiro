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
  tft.begin();
  tft.setRotation(1);
  uint16_t calData[5] = { 197, 3488, 330, 3451, 1 };
  tft.setTouch(calData);

  Serial.begin(115200);

  sdBegin();

  SystemControl.begin();
  Keyboard.begin();
  ConsumerControl.begin();
  USB.begin();
  MenuButtons();
}

void loop() {
  toque();
}
