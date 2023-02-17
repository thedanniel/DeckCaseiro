/*void botao(int x) {
  switch (x) {
    case 1:
      tela = 1;
      printOBS();
      break;
    case 2:
      tela = 2;
      printPC();
      break;
    case 3:
      tela = 3;
      printSOM();
      break;
    case 4:
      tft.fillCircle(40, 40, 20, TFT_RED);
      break;
    case 5:
      tft.fillCircle(40, 40, 20, TFT_BLACK);
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      if (tela == 1 || tela == 2 || tela == 3) {
        tela = 0;
        MenuButtons();
      }
      break;
    case 10:
      break;
    case 11:
      break;
    case 12:
      break;
  }
}
*/

void botao(int16_t x){
  Serial.write(x);
  Serial1.write(x);
}