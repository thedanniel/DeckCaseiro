void botao(int x) {
  switch (x) {
    case 'a':
      Keyboard.write(KEY_F13);
      break;
    case 'b':
      Keyboard.write(KEY_F14);
      break;
    case 'c':
      Keyboard.write(KEY_F15);
      break;
    case 'd':
      Keyboard.write(KEY_F16);
      break;
    case 'e':
      Keyboard.write(KEY_F17);
      break;
    case 'f':
      Keyboard.write(KEY_F18);
      break;
    case 'g':
      Keyboard.write(KEY_F19);
      break;
    case 'h':
      Keyboard.write(KEY_F20);
      break;
    case 'i':
      Keyboard.write(KEY_F21);
      break;
    case 'j':
      Keyboard.write(KEY_F22);
      break;
    case 'k':
      Keyboard.write(KEY_F23);
      break;
    case 'l':  //PC
      SystemControl.press(SYSTEM_CONTROL_POWER_OFF);
      break;
    case 'm':
      SystemControl.press(SYSTEM_CONTROL_STANDBY);
      break;
    case 'n':
      brilhoUp();
      break;
    case 'N':
      brilhoDown();
      break;
    case 'o':
      lock();
      break;
    case 'p':
      taskmanager();
      break;
    case 'q':
      calculadora();
      break;
    case 'r':
      explorer();
      break;
    case 's':
      email();
      break;
    case 't':
      navegador();
      break;
    case 'u':  //SOM
      prev();
      break;
    case 'v':
      playpause();
      break;
    case 'w':
      next();
      break;
    case 'x':
      volUp();
      break;
    case 'y':
      mute();
      break;
    case 'z':
      volDown();
      break;
  }
}

//PC
void brilhoUp() {
  ConsumerControl.press(CONSUMER_CONTROL_BRIGHTNESS_INCREMENT);
  ConsumerControl.release();
}
void brilhoDown() {
  ConsumerControl.press(CONSUMER_CONTROL_BRIGHTNESS_DECREMENT);
  ConsumerControl.release();
}
void email() {
  ConsumerControl.press(CONSUMER_CONTROL_EMAIL_READER);
  ConsumerControl.release();
}
void navegador() {
  ConsumerControl.press(CONSUMER_CONTROL_HOME);
  ConsumerControl.release();
}
void explorer() {
  ConsumerControl.press(CONSUMER_CONTROL_LOCAL_BROWSER);
  ConsumerControl.release();
}
void calculadora() {
  ConsumerControl.press(CONSUMER_CONTROL_CALCULATOR);
  ConsumerControl.release();
}

void taskmanager() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();
}

void lock() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('l');
  Keyboard.releaseAll();
}

//SOM
void prev() {
  ConsumerControl.press(CONSUMER_CONTROL_SCAN_PREVIOUS);
  ConsumerControl.release();
}
void next() {
  ConsumerControl.press(CONSUMER_CONTROL_SCAN_NEXT);
  ConsumerControl.release();
}
void playpause() {
  ConsumerControl.press(CONSUMER_CONTROL_PLAY_PAUSE);
  ConsumerControl.release();
}
void mute() {
  ConsumerControl.press(CONSUMER_CONTROL_MUTE);
  ConsumerControl.release();
}
void volUp() {
  ConsumerControl.press(CONSUMER_CONTROL_VOLUME_INCREMENT);
  ConsumerControl.release();
}
void volDown() {
  ConsumerControl.press(CONSUMER_CONTROL_VOLUME_DECREMENT);
  ConsumerControl.release();
}