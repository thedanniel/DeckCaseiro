#define NUM_TELAS 5

// Strings individuais em PROGMEM
static const char tela0[] PROGMEM = "/0.jpg";
static const char tela1[] PROGMEM = "/1.jpg";
static const char tela2[] PROGMEM = "/2.jpg";
static const char tela3[] PROGMEM = "/3.jpg";
static const char tela4[] PROGMEM = "/4.jpg";

// Array de ponteiros em PROGMEM
static const char* const telaJpg[] PROGMEM = {
  tela0, tela1, tela2, tela3, tela4
};

void renderTela(int t) {
  if (t < 0 || t >= NUM_TELAS) return;
  
  // Buffer para ler a string da PROGMEM
  char filename[10]; // "/X.jpg" = 6 chars + \0
  
  // Lê o ponteiro do array PROGMEM
  strcpy_P(filename, (char*)pgm_read_ptr(&telaJpg[t]));
  
  drawSdJpeg(filename, 0, 0);
}
