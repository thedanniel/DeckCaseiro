void printOBS() {  //OBS
  tft.fillScreen(TFT_BLACK);
  for (int i = 1; i < 13; i++) {
    printTiles(i);
  }
  printREC();
  printStopREC();
  printLive();
  printStopLive();
  Gravacao();
  Transmissao();
  Controles();
  Cena1();
  Cena2();
  Cena3();
  Cena4();
  printLogo();
  printMic();
  printSpeakerOBS();
  backButton();
}

void printAPPs() {  //Aplicativos
  tft.fillScreen(TFT_BLACK);
  printTiles(2);
  printTiles(3);
  printTiles(4);
  printTiles(7);
  printTiles(8);
  printTaskManager();
  printCalculadora();
  printExplorer();
  printEmail();
  printInternet();
  printTiles(9);  //back
  backButton();
}

void printPC() {  //PC
  tft.fillScreen(TFT_BLACK);
  printTiles(3);
  printTiles(4);
  printTiles(7);
  printTiles(8);
  printTiles(12);
  //inesXY();
  printBrilhoUp();
  printBrilhoDown();
  printSleep();
  printPower();
  printLock();
  printTiles(9);  //back
  backButton();
}

void printSOM() {  //SOM
  tft.fillScreen(TFT_BLACK);
  printTiles(2);
  printTiles(3);
  printTiles(4);
  printTiles(8);
  printTiles(11);
  printTiles(12);
  printTiles(9);  //back
  printPrev();
  printPlayPause();
  printNext();
  printSpeakerUp();
  printSpeakerDown();
  printSpeakerMute();
  backButton();  //retorno
}

void desenhaTriangulo(int x, int y, int w, int h, int o, uint32_t color) {
  switch (o) {
    case 0:
      tft.fillTriangle(x, (y + (w / 2)), (x + h), y, (x + h), (y + w), color);
      break;
    case 1:
      tft.fillTriangle(x, (y + h), (x + (w / 2)), y, (x + w), (y + h), color);
      break;
    case 2:
      tft.fillTriangle(x, y, x, (y + w), (x + h), (y + (w / 2)), color);
      break;
    case 3:
      tft.fillTriangle(x, y, (x + (w / 2)), (y + h), (x + w), y, color);
      break;
  }
}
