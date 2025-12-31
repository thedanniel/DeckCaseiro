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
      botao('u');
      delay(100);
    }
    if (toqueDetect(109, 4, 102, 75)) { //Play / Pause
      botao('v');
      delay(100);
    }
    if (toqueDetect(215, 4, 101, 75)) { //Next
      botao('w');
      delay(100);
    }
    if (toqueDetect(162, 83, 154, 75)) { //Volume Up
      botao('x');
      delay(100);
    }
    if (toqueDetect(4, 162, 75, 75)) { //Back
      delay(100);
      tela = 0;
      MenuButtons();
    }
    if (toqueDetect(241, 162, 75, 75)) { //Mute
      botao('y');
      delay(100);
    }
    if (toqueDetect(4, 83, 154, 75)) { //Volume Down
      botao('z');
      delay(100);
    }
  } else if (tela == 2) {  //Apps
    if (toqueDetect(109, 4, 102, 114)) { //Task Manager
      botao('p');
      delay(100);
    }
    if (toqueDetect(215, 122, 101, 114)) { //Calculator
      botao('q');
      delay(100);
    }
    if (toqueDetect(215, 4, 101, 114)) { //Windows Explorer
      botao('r');
      delay(100);
    }
    if (toqueDetect(109, 122, 102, 114)) { //Mail
      botao('s');
      delay(100);
    }
    if (toqueDetect(4, 4, 101, 114)) { //Browser
      botao('t');
      delay(100);
    }
    if (toqueDetect(4, 162, 75, 75)) { //Back
      delay(100);
      tela = 0;
      MenuButtons();
    }
  } else if (tela == 3) {  //PC
    if (toqueDetect(162, 4, 75, 75)) { //Brightness Up
      botao('n');
      delay(100);
    }
    if (toqueDetect(162, 83, 75, 75)) { //Brightness Down
      botao('N');
      delay(100);
    }
    if (toqueDetect(241, 4, 75, 75)) { //Power Off
      botao('l');
      delay(100);
    }
    if (toqueDetect(241, 83, 75, 75)) { //Sleep/Suspend
      botao('m');
      delay(100);
    }
    if (toqueDetect(241, 162, 75, 75)) { //Lock
      botao('o');
      delay(100);
    }
    if (toqueDetect(4, 162, 75, 75)) { //Back
      delay(100);
      tela = 0;
      MenuButtons();
    }
  } else if (tela == 4) {  //OBS
    if (toqueDetect(4, 4, 75, 75)) {
      botao('a');
      delay(100);
    }
    if (toqueDetect(83, 4, 75, 75)) {
      botao('b');
      delay(100);
    }
    if (toqueDetect(162, 4, 75, 75)) {
      botao('c');
      delay(100);
    }
    if (toqueDetect(241, 4, 75, 75)) {
      botao('d');
      delay(100);
    }
    if (toqueDetect(4, 83, 75, 75)) {
      botao('e');
      delay(100);
    }
    if (toqueDetect(83, 83, 75, 75)) {
      botao('f');
      delay(100);
    }
    if (toqueDetect(162, 83, 75, 75)) {
      botao('g');
      delay(100);
    }
    if (toqueDetect(241, 83, 75, 75)) {
      botao('h');
      delay(100);
    }
    if (toqueDetect(4, 162, 75, 75)) {
      delay(100);
      tela = 0;
      MenuButtons();
    }
    if (toqueDetect(83, 162, 75, 75)) {
      botao('k');
      delay(100);
    }
    if (toqueDetect(162, 162, 75, 75)) {
      botao('i');
      delay(100);
    }
    if (toqueDetect(241, 162, 75, 75)) {
      botao('j');
      delay(100);
    }
  }
}
