#include "raylib.h"
#include "RaylibProgram.h"
#include "CerberusFrameworkRaylib/Logger/CFR_Logger.h"

//#include "rlImGui.h"

int main() {
	const int screenWidth = 800;
	const int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	//auto app = RaylibProgram(); //Create Raylib Application

	CFR_Logger::Log_Info("RAYLIB is initialize");

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText("Hello World!!, Long successfully create a new window", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}

	CFR_Logger::Log_Info("RAYLIB is closing now !!");

	CloseWindow();

	return 0;
}