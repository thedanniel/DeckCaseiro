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

void linesXY() {
  for (int i = 0; i < 320; i += 20) {
    tft.setCursor(i, 0);
    tft.setTextFont(1);
    tft.setTextSize(1);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.print(i);
    tft.setCursor(0, i);
    tft.setTextFont(1);
    tft.setTextSize(1);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.print(i);
    tft.drawLine(0, i, 320, i, 0x39C4);
    tft.drawLine(i, 0, i, 320, 0x39C4);
  }
}
