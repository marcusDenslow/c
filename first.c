#include "raylib.h"
// this is a comment

int main(void){
  
  const screenWidth = 800;
  const screenHeight = 450;


  initWindow(screenWidth, screenHeight, "just testing");


  SetTargetFPS(60);

  while (!WindowShouldClose){
    BeginDrawing();

      ClearBackground(RAYWHITE);

      DrawText("this is a test##", 190, 200, 20, LIGHTGRAY);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
