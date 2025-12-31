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

  if (!SD.begin(5, tft.getSPIinstance())) {
    Serial.println("Card Mount Failed");
    return;
  }
  uint8_t cardType = SD.cardType();

  if (cardType == CARD_NONE) {
    Serial.println("No SD card attached");
    return;
  }

  Serial.print("SD Card Type: ");
  if (cardType == CARD_MMC) {
    Serial.println("MMC");
  } else if (cardType == CARD_SD) {
    Serial.println("SDSC");
  } else if (cardType == CARD_SDHC) {
    Serial.println("SDHC");
  } else {
    Serial.println("UNKNOWN");
  }

  uint64_t cardSize = SD.cardSize() / (1024 * 1024);
  Serial.printf("SD Card Size: %lluMB\n", cardSize);

  Serial.println("initialisation done.");

  SystemControl.begin();
  Keyboard.begin();
  ConsumerControl.begin();
  USB.begin();
  MenuButtons();
}

void loop() {
  toque();
}
