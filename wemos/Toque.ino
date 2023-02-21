void toque() {
  if (tela == 0) {
    if (toqueDetect(0, 0, 105, 240)) {
      tft.fillRect(0, 0, 105, 240, TFT_BLUE);
      tft.setTextColor(TFT_BLACK);
      tft.setTextFont(2);
      tft.setTextSize(2);
      tft.setCursor(28, 106);
      tft.print("OBS");
      delay(100);
      tela = 1;
      printOBS();
    }
    if (toqueDetect(106, 0, 105, 120)) {
      tft.fillRect(106, 0, 105, 120, TFT_BLUE);
      tft.setTextColor(TFT_BLACK);
      tft.setTextFont(2);
      tft.setTextSize(2);
      tft.setCursor(114, 43);
      tft.print("Sistema");
      delay(100);
      tela = 2;
      printPC();
    }
    if (toqueDetect(106, 121, 105, 120)) {
      tft.fillRect(106, 121, 105, 240, TFT_BLUE);
      tft.setTextColor(TFT_BLACK);
      tft.setTextFont(2);
      tft.setTextSize(2);
      tft.setCursor(132, 162);
      tft.print("Apps");
      delay(100);
      tela = 3;
      printAPPs();
    }
    if (toqueDetect(212, 0, 105, 240)) {
      tft.fillRect(212, 0, 105, 240, TFT_BLUE);
      tft.setTextColor(TFT_BLACK);
      tft.setTextFont(2);
      tft.setTextSize(2);
      tft.setCursor(236, 106);
      tft.print("SOM");
      delay(100);
      tela = 4;
      printSOM();
    }
  } else if (tela == 1) {  //OBS
    if (toqueDetect(4, 4, 75, 75)) {
      printBlueTiles(1);
      Gravacao();
      botao('a');
      delay(100);
      printTiles(1);
      Gravacao();
      tft.fillCircle(41, 41, 18, TFT_RED);
    }
    if (toqueDetect(83, 4, 75, 75)) {
      printBlueTiles(2);
      Gravacao();
      Controles();
      printStopREC();
      botao('b');
      delay(100);
      tft.fillCircle(41, 41, 18, TFT_BLACK);
      printTiles(2);
      Gravacao();
      Controles();
      printStopREC();
    }
    if (toqueDetect(162, 4, 75, 75)) {
      printBlueTiles(3);
      Transmissao();
      Controles();
      botao('c');
      delay(100);
      printTiles(3);
      Transmissao();
      Controles();
      tft.fillCircle(198, 41, 18, TFT_RED);
    }
    if (toqueDetect(241, 4, 75, 75)) {
      printBlueTiles(4);
      Transmissao();
      printStopLive();
      botao('d');
      delay(100);
      tft.fillCircle(198, 41, 18, TFT_BLACK);
      printTiles(4);
      Transmissao();
      printStopLive();
    }
    if (toqueDetect(4, 83, 75, 75)) {
      printBlueTiles(5);
      Cena1();
      botao('e');
      delay(100);
      printTiles(5);
      Cena1();
    }
    if (toqueDetect(83, 83, 75, 75)) {
      printBlueTiles(6);
      Controles();
      Cena2();
      botao('f');
      delay(100);
      printTiles(6);
      Controles();
      Cena2();
    }
    if (toqueDetect(162, 83, 75, 75)) {
      printBlueTiles(7);
      Controles();
      Cena3();
      botao('g');
      delay(100);
      printTiles(7);
      Controles();
      Cena3();
    }
    if (toqueDetect(241, 83, 75, 75)) {
      printBlueTiles(8);
      Cena4();
      botao('h');
      delay(100);
      printTiles(8);
      Cena4();
    }
    if (toqueDetect(4, 162, 75, 75)) {
      printBlueTiles(9);
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
    if (toqueDetect(83, 162, 75, 75)) {
      printBlueTiles(10);
      printLogoB();
      botao('k');
      delay(100);
      printTiles(10);
      printLogo();
    }
    if (toqueDetect(162, 162, 75, 75)) {
      printBlueTiles(11);
      printMicB();
      botao('i');
      delay(100);
      printTiles(11);
      printMic();
    }
    if (toqueDetect(241, 162, 75, 75)) {
      printBlueTiles(12);
      printSpeakerOBS();
      botao('j');
      delay(100);
      printTiles(12);
      printSpeakerOBS();
    }
  } else if (tela == 2) {  //PC
    if (toqueDetect(162, 4, 75, 75)) {
      printBlueTiles(3);
      printBrilhoUp();
      botao('n');
      delay(100);
      printTiles(3);
      printBrilhoUp();
    }
    if (toqueDetect(162, 83, 75, 75)) {
      printBlueTiles(7);
      printBrilhoDown();
      botao('N');
      delay(100);
      printTiles(7);
      printBrilhoDown();
    }
    if (toqueDetect(241, 4, 75, 75)) {
      printBlueTiles(4);
      printPowerB();
      botao('l');
      delay(100);
      printTiles(4);
      printPower();
    }
    if (toqueDetect(241, 83, 75, 75)) {
      printBlueTiles(8);
      printSleepB();
      botao('m');
      delay(100);
      printTiles(8);
      printSleep();
    }
    if (toqueDetect(241, 162, 75, 75)) {
      printBlueTiles(12);
      printLockB();
      botao('o');
      delay(100);
      printTiles(12);
      printLock();
    }
    if (toqueDetect(4, 162, 75, 75)) {
      printBlueTiles(9);
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
  } else if (tela == 3) {  //Apps
    if (toqueDetect(83, 4, 75, 75)) {
      printBlueTiles(2);
      printTaskManager();
      botao('p');
      delay(100);
      printTiles(2);
      printTaskManager();
    }
    if (toqueDetect(162, 4, 75, 75)) {
      printBlueTiles(3);
      printCalculadora();
      botao('q');
      delay(100);
      printTiles(3);
      printCalculadora();
    }
    if (toqueDetect(241, 4, 75, 75)) {
      printBlueTiles(4);
      printExplorer();
      botao('r');
      delay(100);
      printTiles(4);
      printExplorer();
    }
    if (toqueDetect(162, 83, 75, 75)) {
      printBlueTiles(7);
      printEmail();
      botao('s');
      delay(100);
      printTiles(7);
      printEmail();
    }
    if (toqueDetect(241, 83, 75, 75)) {
      printBlueTiles(8);
      printInternet();
      botao('t');
      delay(100);
      printTiles(8);
      printInternet();
    }
    if (toqueDetect(4, 162, 75, 75)) {
      printBlueTiles(9);
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
  } else if (tela == 4) {  //SOM
    if (toqueDetect(83, 4, 75, 75)) {
      printBlueTiles(2);
      printPrev();
      botao('u');
      delay(100);
      printTiles(2);
      printPrev();
    }
    if (toqueDetect(162, 4, 75, 75)) {
      printBlueTiles(3);
      printPlayPause();
      botao('v');
      delay(100);
      printTiles(3);
      printPlayPause();
    }
    if (toqueDetect(241, 4, 75, 75)) {
      printBlueTiles(4);
      printNext();
      botao('w');
      delay(100);
      printTiles(4);
      printNext();
    }
    if (toqueDetect(241, 83, 75, 75)) {
      printBlueTiles(8);
      printSpeakerUp();
      botao('x');
      delay(100);
      printTiles(8);
      printSpeakerUp();
    }
    if (toqueDetect(4, 162, 75, 75)) {
      printBlueTiles(9);
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
    if (toqueDetect(162, 162, 75, 75)) {
      printBlueTiles(11);
      printSpeakerMute();
      botao('y');
      delay(100);
      printTiles(11);
      printSpeakerMute();
    }
    if (toqueDetect(241, 162, 75, 75)) {
      printBlueTiles(12);
      printSpeakerDown();
      botao('z');
      delay(100);
      printTiles(12);
      printSpeakerDown();
    }
  }
}

bool toqueDetect(int xini, int yini, int xend, int yend) {
  uint16_t x, y;
  if (tft.getTouch(&x, &y)) {
    if ((x > xini) && (x < (xini + xend))) {
      if ((y > yini) && (y <= (yini + yend))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  } else {
    return false;
  }
}
