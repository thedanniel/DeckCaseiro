#include "HID-Project.h"

//#define SYSTEM_POWER_DOWN 0x81

void setup() {
  // start serial port at 9600 bps:
  Serial.begin(9600);
  Serial1.begin(9600);
  Keyboard.begin();
  Consumer.begin();
  System.begin();
}

void loop() {
  // if we get a valid byte, read analog ins:
  if (Serial1.available() > 0) {
    int inByte = Serial1.read();
    Serial.println(inByte);
    seleciona(inByte);
  }
}

void seleciona(int x) {
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
      System.write(SYSTEM_SLEEP);
      break;
    case 'm':
      System.write(SYSTEM_POWER_DOWN);
      break;
    case 'n':
      //System.write(SYSTEM_POWER_DOWN);
      break;
    case 'o':
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press(KEY_L);
      Keyboard.releaseAll();
      break;
    case 'p':
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press(KEY_ESC);
      Keyboard.releaseAll();
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

//OBS
//Keyboard.write(KEY_F13);


//PC
void brilhoUp() {
  Consumer.write(CONSUMER_BRIGHTNESS_UP);
}
void brilhoDown() {
  Consumer.write(CONSUMER_BRIGHTNESS_DOWN);
}
void email() {
  Consumer.write(CONSUMER_EMAIL_READER);
}
void navegador() {
  Consumer.write(CONSUMER_BROWSER_HOME);
}
void explorer() {
  Consumer.write(CONSUMER_EXPLORER);
}
void calculadora() {
  Consumer.write(CONSUMER_CALCULATOR);
}

//SOM
void prev() {
  Consumer.write(MEDIA_PREV);
}
void next() {
  Consumer.write(MEDIA_NEXT);
}
void playpause() {
  Consumer.write(MEDIA_PLAY_PAUSE);
}
void mute() {
  Consumer.write(MEDIA_VOLUME_MUTE);
}
void volUp() {
  Consumer.write(MEDIA_VOLUME_UP);
}
void volDown() {
  Consumer.write(MEDIA_VOL_DOWN);
}
