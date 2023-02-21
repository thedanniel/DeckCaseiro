void printTiles(int x) {
  switch (x) {
    case 1:
      tft.fillRoundRect(4, 4, 75, 75, 15, TFT_WHITE);
      break;
    case 2:
      tft.fillRoundRect(83, 4, 75, 75, 15, TFT_WHITE);
      break;
    case 3:
      tft.fillRoundRect(162, 4, 75, 75, 15, TFT_WHITE);
      break;
    case 4:
      tft.fillRoundRect(241, 4, 75, 75, 15, TFT_WHITE);
      break;
    case 5:
      tft.fillRoundRect(4, 83, 75, 75, 15, TFT_WHITE);
      break;
    case 6:
      tft.fillRoundRect(83, 83, 75, 75, 15, TFT_WHITE);
      break;
    case 7:
      tft.fillRoundRect(162, 83, 75, 75, 15, TFT_WHITE);
      break;
    case 8:
      tft.fillRoundRect(241, 83, 75, 75, 15, TFT_WHITE);
      break;
    case 9:
      tft.fillRoundRect(4, 162, 75, 75, 15, TFT_WHITE);
      break;
    case 10:
      tft.fillRoundRect(83, 162, 75, 75, 15, TFT_WHITE);
      break;
    case 11:
      tft.fillRoundRect(162, 162, 75, 75, 15, TFT_WHITE);
      break;
    case 12:
      tft.fillRoundRect(241, 162, 75, 75, 15, TFT_WHITE);
      break;
  }
}

void printBlueTiles(int x) {
  switch (x) {
    case 1:
      tft.fillRoundRect(4, 4, 75, 75, 15, TFT_BLUE);
      break;
    case 2:
      tft.fillRoundRect(83, 4, 75, 75, 15, TFT_BLUE);
      break;
    case 3:
      tft.fillRoundRect(162, 4, 75, 75, 15, TFT_BLUE);
      break;
    case 4:
      tft.fillRoundRect(241, 4, 75, 75, 15, TFT_BLUE);
      break;
    case 5:
      tft.fillRoundRect(4, 83, 75, 75, 15, TFT_BLUE);
      break;
    case 6:
      tft.fillRoundRect(83, 83, 75, 75, 15, TFT_BLUE);
      break;
    case 7:
      tft.fillRoundRect(162, 83, 75, 75, 15, TFT_BLUE);
      break;
    case 8:
      tft.fillRoundRect(241, 83, 75, 75, 15, TFT_BLUE);
      break;
    case 9:
      tft.fillRoundRect(4, 162, 75, 75, 15, TFT_BLUE);
      break;
    case 10:
      tft.fillRoundRect(83, 162, 75, 75, 15, TFT_BLUE);
      break;
    case 11:
      tft.fillRoundRect(162, 162, 75, 75, 15, TFT_BLUE);
      break;
    case 12:
      tft.fillRoundRect(241, 162, 75, 75, 15, TFT_BLUE);
      break;
  }
}

void Gravacao() {
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setCursor(50, 0);
  tft.print("Gravacao");
}

void Transmissao() {
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setCursor(200, 0);
  tft.print("Transmissao");
}

void Controles() {
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setCursor(132, 75);
  tft.print("Controles");
}

void Cena1() {
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(20, 112);
  tft.print("Cena 1");
}
void Cena2() {
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(99, 112);
  tft.print("Cena 2");
}
void Cena3() {
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(178, 112);
  tft.print("Cena 3");
}
void Cena4() {
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(258, 112);
  tft.print("Cena 4");
}

void printLogo() {
  tft.fillCircle(120, 200, 26, TFT_BLACK);
  tft.fillCircle(117, 185, 13, TFT_WHITE);
  tft.fillCircle(110, 211, 13, TFT_WHITE);
  tft.fillCircle(135, 201, 13, TFT_WHITE);
  tft.fillCircle(120, 200, 3, TFT_WHITE);
  tft.fillCircle(121, 185, 11, TFT_BLACK);
  tft.fillCircle(107, 205, 11, TFT_BLACK);
  tft.fillCircle(133, 207, 11, TFT_BLACK);
}

void printLogoB() {
  tft.fillCircle(120, 200, 26, TFT_BLACK);
  tft.fillCircle(117, 185, 13, TFT_BLUE);
  tft.fillCircle(110, 211, 13, TFT_BLUE);
  tft.fillCircle(135, 201, 13, TFT_BLUE);
  tft.fillCircle(120, 200, 3, TFT_BLUE);
  tft.fillCircle(121, 185, 11, TFT_BLACK);
  tft.fillCircle(107, 205, 11, TFT_BLACK);
  tft.fillCircle(133, 207, 11, TFT_BLACK);
}

void printBrilhoUp() {
  tft.fillCircle(200, 41, 15, TFT_BLACK);
  tft.drawWideLine(200, 8, 200, 21, 3, TFT_BLACK);   //up
  tft.drawWideLine(200, 61, 200, 74, 3, TFT_BLACK);  //down
  tft.drawWideLine(167, 40, 180, 40, 3, TFT_BLACK);  //left
  tft.drawWideLine(220, 40, 233, 40, 3, TFT_BLACK);  //right
  tft.drawWideLine(186, 26, 176, 16, 3, TFT_BLACK);  //top-left
  tft.drawWideLine(214, 26, 224, 16, 3, TFT_BLACK);  //top-right
  tft.drawWideLine(186, 54, 176, 64, 3, TFT_BLACK);  //bottom-left
  tft.drawWideLine(214, 54, 224, 64, 3, TFT_BLACK);  //bottom-right
}

void printBrilhoDown() {
  tft.fillCircle(200, 120, 15, TFT_BLACK);
  tft.drawWideLine(200, 94, 200, 99, 3, TFT_BLACK);    //up
  tft.drawWideLine(200, 140, 200, 145, 3, TFT_BLACK);  //down
  tft.drawWideLine(175, 120, 180, 120, 3, TFT_BLACK);  //left
  tft.drawWideLine(220, 120, 225, 120, 3, TFT_BLACK);  //right
  tft.drawWideLine(183, 103, 186, 106, 3, TFT_BLACK);  //top-left
  tft.drawWideLine(217, 103, 214, 106, 3, TFT_BLACK);  //top-right
  tft.drawWideLine(186, 133, 183, 136, 3, TFT_BLACK);  //bottom-left
  tft.drawWideLine(214, 133, 217, 136, 3, TFT_BLACK);  //bottom-right
}

void printSleep() {
  tft.fillCircle(279, 120, 24, TFT_BLACK);  //sleep
  tft.fillCircle(289, 120, 18, TFT_WHITE);
}

void printSleepB() {
  tft.fillCircle(279, 120, 24, TFT_BLACK);  //sleep
  tft.fillCircle(289, 120, 18, TFT_BLUE);
}

void printPower() {
  tft.fillCircle(279, 42, 24, TFT_BLACK);  // power off
  tft.fillCircle(279, 42, 18, TFT_WHITE);
  tft.fillRoundRect(274, 8, 11, 30, 4, TFT_WHITE);
  tft.fillRoundRect(276, 13, 7, 24, 4, TFT_BLACK);
}

void printPowerB() {
  tft.fillCircle(279, 42, 24, TFT_BLACK);  // power off
  tft.fillCircle(279, 42, 18, TFT_BLUE);
  tft.fillRoundRect(274, 8, 11, 30, 4, TFT_BLUE);
  tft.fillRoundRect(276, 13, 7, 24, 4, TFT_BLACK);
}

void printLock() {
  tft.fillRoundRect(272, 180, 17, 25, 9, TFT_BLACK);  //lock
  tft.fillRoundRect(274, 182, 13, 20, 7, TFT_WHITE);
  tft.fillRoundRect(265, 194, 31, 27, 5, TFT_BLACK);
  tft.fillCircle(280, 204, 3, TFT_WHITE);
  tft.fillRoundRect(279, 205, 3, 9, 1, TFT_WHITE);
}

void printLockB() {
  tft.fillRoundRect(272, 180, 17, 25, 9, TFT_BLACK);  //lock
  tft.fillRoundRect(274, 182, 13, 20, 7, TFT_BLUE);
  tft.fillRoundRect(265, 194, 31, 27, 5, TFT_BLACK);
  tft.fillCircle(280, 204, 3, TFT_WHITE);
  tft.fillRoundRect(279, 205, 3, 9, 1, TFT_BLUE);
}

void printTaskManager() {
  desenhaTriangulo(96, 48, 50, 17, 1, TFT_BLACK);  //task manager
  tft.fillRoundRect(95, 18, 51, 42, 5, TFT_BLACK);
  tft.fillRoundRect(98, 21, 45, 36, 5, TFT_WHITE);
  tft.drawLine(105, 38, 114, 38, TFT_GREEN);
  tft.drawLine(114, 38, 118, 30, TFT_GREEN);
  tft.drawLine(118, 30, 122, 49, TFT_GREEN);
  tft.drawLine(122, 49, 125, 38, TFT_GREEN);
  tft.drawLine(125, 38, 135, 38, TFT_GREEN);
  tft.drawLine(105, 39, 114, 39, TFT_GREEN);
  tft.drawLine(114, 39, 118, 31, TFT_GREEN);
  tft.drawLine(118, 31, 122, 50, TFT_GREEN);
  tft.drawLine(122, 50, 125, 39, TFT_GREEN);
  tft.drawLine(125, 39, 135, 39, TFT_GREEN);
}

void printCalculadora() {
  tft.fillRect(182, 18, 35, 47, TFT_BLACK);  //calculadora
  tft.fillRect(185, 21, 29, 10, 0x39C4);
  tft.fillRect(185, 37, 9, 7, TFT_WHITE);
  tft.fillRect(195, 37, 9, 7, TFT_WHITE);
  tft.fillRect(205, 37, 9, 7, TFT_WHITE);
  tft.fillRect(185, 45, 9, 7, TFT_WHITE);
  tft.fillRect(195, 45, 9, 7, TFT_WHITE);
  tft.fillRect(205, 45, 9, 7, TFT_WHITE);
  tft.fillRect(185, 53, 9, 7, TFT_WHITE);
  tft.fillRect(195, 53, 9, 7, TFT_WHITE);
  tft.fillRect(205, 53, 9, 7, TFT_WHITE);
}

void printExplorer() {
  tft.fillRect(253, 25, 51, 38, TFT_BLACK);  //explorer
  tft.fillRect(253, 20, 27, 10, 0x39C4);
}

void printEmail() {
  tft.fillTriangle(173, 109, 194, 122, 173, 137, TFT_BLACK);  //email  //left
  tft.fillTriangle(228, 109, 208, 122, 228, 137, TFT_BLACK);  //right
  tft.fillTriangle(201, 123, 228, 106, 173, 106, TFT_BLACK);  //top
  tft.fillTriangle(173, 140, 197, 123, 228, 140, TFT_BLACK);  //bottom
  tft.fillTriangle(206, 123, 178, 140, 228, 140, TFT_BLACK);
}

void printInternet() {
  desenhaTriangulo(254, 127, 50, 17, 1, TFT_BLACK);  //internet
  tft.fillRoundRect(253, 97, 51, 42, 5, TFT_BLACK);
  tft.fillRoundRect(256, 100, 45, 36, 5, TFT_WHITE);
  tft.fillCircle(278, 119, 12, TFT_BLUE);
  tft.drawEllipse(278, 119, 8, 15, TFT_WHITE);
  tft.drawLine(278, 108, 278, 130, TFT_WHITE);
  tft.drawLine(268, 117, 288, 117, TFT_WHITE);
  tft.drawLine(268, 123, 288, 123, TFT_WHITE);
}

void printREC() {
  tft.fillCircle(41, 41, 18, TFT_BLACK);  //gravacao
}

void printStopREC() {
  tft.fillRect(103, 24, 33, 33, TFT_BLACK);
}

void printLive() {
  tft.fillCircle(198, 41, 18, TFT_BLACK);  //transmissao
}

void printStopLive() {
  tft.fillRect(260, 23, 33, 33, TFT_BLACK);
}

void printMic() {
  tft.fillRect(180, 223, 13, 2, TFT_BLACK);  // mic
  tft.fillRect(185, 213, 3, 12, TFT_BLACK);
  tft.fillRoundRect(175, 177, 23, 38, 10, TFT_BLACK);
  tft.fillRoundRect(177, 171, 19, 41, 8, TFT_WHITE);
  tft.fillRect(168, 171, 32, 33, TFT_WHITE);
  tft.fillRoundRect(179, 179, 15, 31, 7, TFT_BLACK);
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(210, 180);
  tft.print("ON");
  tft.setCursor(206, 207);
  tft.print("OFF");
}

void printMicB() {
  tft.fillRect(180, 223, 13, 2, TFT_BLACK);  // mic
  tft.fillRect(185, 213, 3, 12, TFT_BLACK);
  tft.fillRoundRect(175, 177, 23, 38, 10, TFT_BLACK);
  tft.fillRoundRect(177, 171, 19, 41, 8, TFT_BLUE);
  tft.fillRect(168, 171, 32, 33, TFT_BLUE);
  tft.fillRoundRect(179, 179, 15, 31, 7, TFT_BLACK);
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(210, 180);
  tft.print("ON");
  tft.setCursor(206, 207);
  tft.print("OFF");
}

void printSpeakerOBS() {
  tft.fillRect(254, 190, 20, 21, TFT_BLACK);  //speaker
  desenhaTriangulo(255, 179, 43, 23, 0, TFT_BLACK);
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(290, 180);
  tft.print("ON");
  tft.setCursor(286, 207);
  tft.print("OFF");
}

void printPrev() {
  desenhaTriangulo(109, 26, 31, 25, 0, TFT_BLACK);  //prev
  tft.fillRect(107, 26, 8, 31, TFT_BLACK);
}

void printPlayPause() {
  desenhaTriangulo(175, 26, 31, 25, 2, TFT_BLACK);  //play
  tft.fillRect(203, 26, 8, 31, TFT_BLACK);          //pause
  tft.fillRect(215, 26, 8, 31, TFT_BLACK);
}

void printNext() {
  desenhaTriangulo(265, 26, 31, 25, 2, TFT_BLACK);  //next
  tft.fillRect(284, 26, 8, 31, TFT_BLACK);
}

void printSpeakerUp() {
  desenhaTriangulo(284, 99, 19, 14, 1, TFT_BLACK);  //up
  tft.fillRect(254, 110, 20, 21, TFT_BLACK);
  desenhaTriangulo(255, 99, 43, 23, 0, TFT_BLACK);
}

void printSpeakerDown() {
  desenhaTriangulo(284, 208, 19, 14, 3, TFT_BLACK);  //down
  tft.fillRect(254, 190, 20, 21, TFT_BLACK);
  desenhaTriangulo(255, 179, 43, 23, 0, TFT_BLACK);
}

void printSpeakerMute() {
  tft.fillRect(175, 190, 20, 21, TFT_BLACK);  //speaker mute unmute
  desenhaTriangulo(176, 179, 43, 23, 0, TFT_BLACK);
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_BLACK);
  tft.setCursor(210, 180);
  tft.print("ON");
  tft.setCursor(206, 207);
  tft.print("OFF");
}

void backButton() {
  tft.drawLine(50, 180, 30, 200, TFT_BLACK);
  tft.drawLine(51, 180, 31, 200, TFT_BLACK);
  tft.drawLine(30, 200, 50, 220, TFT_BLACK);
  tft.drawLine(31, 200, 51, 220, TFT_BLACK);
}
