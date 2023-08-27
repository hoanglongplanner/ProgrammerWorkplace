#include "raylib.h"
#include "RaylibProgram.h"

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	//auto app = RaylibProgram(); //Create Raylib Application

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText("Hello World!!, Long successfully create a new window", 190, 200, 20, LIGHTGRAY);

		EndDrawing();		
	}

	CloseWindow();

	return 0;
}