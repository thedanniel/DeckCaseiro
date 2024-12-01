void toque() {
  if (tela == 0) {
    if (toqueDetect(0, 0, 160, 120)) {
      delay(100);
      tela = 1;
      printSOM();
    }
    if (toqueDetect(160, 0, 320, 120)) {
      delay(100);
      tela = 2;
      printAPPs();
    }
    if (toqueDetect(0, 120, 160, 240)) {
      delay(100);
      tela = 3;
      printPC();
    }
    if (toqueDetect(160, 120, 320, 240)) {
      delay(100);
      tela = 4;
      printOBS();
    }
  } else if (tela == 1) {  //SOM
    if (toqueDetect(4, 4, 101, 75)) { //Prev
      printPrev();
      botao('u');
      delay(100);
      printPrev();
    }
    if (toqueDetect(109, 4, 102, 75)) { //Play / Pause
      printPlayPause();
      botao('v');
      delay(100);
      printPlayPause();
    }
    if (toqueDetect(215, 4, 101, 75)) { //Next
      printNext();
      botao('w');
      delay(100);
      printNext();
    }
    if (toqueDetect(162, 83, 154, 75)) { //Volume Up
      printSpeakerUp();
      botao('x');
      delay(100);
      printSpeakerUp();
    }
    if (toqueDetect(4, 162, 75, 75)) { //Back
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
    if (toqueDetect(241, 162, 75, 75)) { //Mute
      printSpeakerMute();
      botao('y');
      delay(100);
      printSpeakerMute();
    }
    if (toqueDetect(4, 83, 154, 75)) { //Volume Down
      printSpeakerDown();
      botao('z');
      delay(100);
      printSpeakerDown();
    }
  } else if (tela == 2) {  //Apps
    if (toqueDetect(109, 4, 102, 114)) { //Task Manager
      printTaskManager();
      botao('p');
      delay(100);
      printTaskManager();
    }
    if (toqueDetect(215, 122, 101, 114)) { //Calculator
      printCalculadora();
      botao('q');
      delay(100);
      printCalculadora();
    }
    if (toqueDetect(215, 4, 101, 114)) { //Windows Explorer
      printExplorer();
      botao('r');
      delay(100);
      printExplorer();
    }
    if (toqueDetect(109, 122, 102, 114)) { //Mail
      printEmail();
      botao('s');
      delay(100);
      printEmail();
    }
    if (toqueDetect(4, 4, 101, 114)) { //Browser
      printInternet();
      botao('t');
      delay(100);
      printInternet();
    }
    if (toqueDetect(4, 162, 75, 75)) { //Back
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
  } else if (tela == 3) {  //PC
    if (toqueDetect(162, 4, 75, 75)) { //Brightness Up
      printBrilhoUp();
      botao('n');
      delay(100);
      printBrilhoUp();
    }
    if (toqueDetect(162, 83, 75, 75)) { //Brightness Down
      printBrilhoDown();
      botao('N');
      delay(100);
      printBrilhoDown();
    }
    if (toqueDetect(241, 4, 75, 75)) { //Power Off
      printPowerB();
      botao('l');
      delay(100);
      printPower();
    }
    if (toqueDetect(241, 83, 75, 75)) { //Sleep/Suspend
      printSleepB();
      botao('m');
      delay(100);
      printSleep();
    }
    if (toqueDetect(241, 162, 75, 75)) { //Lock
      printLockB();
      botao('o');
      delay(100);
      printLock();
    }
    if (toqueDetect(4, 162, 75, 75)) { //Back
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
  } else if (tela == 4) {  //OBS
    if (toqueDetect(4, 4, 75, 75)) {
      Gravacao();
      botao('a');
      delay(100);
      Gravacao();
      tft.fillCircle(41, 41, 18, TFT_RED);
    }
    if (toqueDetect(83, 4, 75, 75)) {
      Gravacao();
      Controles();
      printStopREC();
      botao('b');
      delay(100);
      tft.fillCircle(41, 41, 18, TFT_BLACK);
      Gravacao();
      Controles();
      printStopREC();
    }
    if (toqueDetect(162, 4, 75, 75)) {
      Transmissao();
      Controles();
      botao('c');
      delay(100);
      Transmissao();
      Controles();
      tft.fillCircle(198, 41, 18, TFT_RED);
    }
    if (toqueDetect(241, 4, 75, 75)) {
      Transmissao();
      printStopLive();
      botao('d');
      delay(100);
      tft.fillCircle(198, 41, 18, TFT_BLACK);
      Transmissao();
      printStopLive();
    }
    if (toqueDetect(4, 83, 75, 75)) {
      Cena1();
      botao('e');
      delay(100);
      Cena1();
    }
    if (toqueDetect(83, 83, 75, 75)) {
      Controles();
      Cena2();
      botao('f');
      delay(100);
      Controles();
      Cena2();
    }
    if (toqueDetect(162, 83, 75, 75)) {
      Controles();
      Cena3();
      botao('g');
      delay(100);
      Controles();
      Cena3();
    }
    if (toqueDetect(241, 83, 75, 75)) {
      Cena4();
      botao('h');
      delay(100);
      Cena4();
    }
    if (toqueDetect(4, 162, 75, 75)) {
      backButton();
      delay(100);
      tela = 0;
      MenuButtons();
    }
    if (toqueDetect(83, 162, 75, 75)) {

      printLogoB();
      botao('k');
      delay(100);
      printLogo();
    }
    if (toqueDetect(162, 162, 75, 75)) {

      printMicB();
      botao('i');
      delay(100);
      printMic();
    }
    if (toqueDetect(241, 162, 75, 75)) {

      printSpeakerOBS();
      botao('j');
      delay(100);
      printSpeakerOBS();
    }
  }
}