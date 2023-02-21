#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

int tela = 0;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial.println("Serial iniciado");
  tft.begin();
  tft.setRotation(1);
  uint16_t calData[5] = { 197, 3488, 330, 3451, 1 };
  tft.setTouch(calData);
  MenuButtons();
}

void loop() {
  toque();
}

void MenuButtons() {
  tft.fillScreen(TFT_BLACK);
  tft.fillRect(0, 0, 105, 240, TFT_WHITE);  //menu buttons
  tft.fillRect(106, 0, 105, 120, TFT_WHITE);
  tft.fillRect(106, 121, 105, 240, TFT_WHITE);
  tft.fillRect(212, 0, 105, 240, TFT_WHITE);
  tft.setTextColor(TFT_BLACK);  //labels
  tft.setTextFont(2);
  tft.setTextSize(2);
  tft.setCursor(28, 106);
  tft.print("OBS");
  tft.setCursor(114, 43);
  tft.print("Sistema");
  tft.setCursor(132, 162);
  tft.print("Apps");
  tft.setCursor(236, 106);
  tft.print("SOM");
}
