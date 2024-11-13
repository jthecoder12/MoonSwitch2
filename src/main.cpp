#include "include/globalvalues.h"
#include <raylib.h>

int main() {
  InitWindow(WIDTH, HEIGHT, "Moon Switch 2");
  SetTargetFPS(60);

  initValues();

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawTextureEx(backgroundTexture, (Vector2){(float)WIDTH / 2 - backgroundTexture.width / 2, (float)HEIGHT / 2 - backgroundTexture.height / 2 - 250}, 0, 2.5, WHITE);
    DrawTextEx(font, "Moon Switch 2", (Vector2){WIDTH / 2 - 90, 20}, (float)font.baseSize, 2, WHITE);
    EndDrawing();
  }

  disposeValues();
  CloseWindow();

  return 0;
}
