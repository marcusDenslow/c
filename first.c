#include "raylib.h"
// this is a comment
int main(void){
  const int screenWidth = 800;
  const int screenHeight = 450;


  InitWindow(screenWidth, screenHeight, "raylib example");

  SetTargetFPS(60);

  while (!WindowShouldClose()){
    BeginDrawing();

      ClearBackground(RAYWHITE);
      
      DrawText("this is a window", 190, 200, 20, LIGHTGRAY);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
