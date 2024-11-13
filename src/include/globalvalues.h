#pragma once

#include <raylib.h>

#define WIDTH 480
#define HEIGHT 854

Font font;
Texture2D backgroundTexture;

void initValues() {
  font = LoadFontEx("assets/Varela_Round/VarelaRound-Regular.ttf", 30, 0, 250);
  backgroundTexture = LoadTexture("assets/background.png");
}

void disposeValues() {
  UnloadFont(font);
  UnloadTexture(backgroundTexture);
}
