#include "raylib.h" // includes the raylib library

int main()
{
	SetConfigFlags(FLAG_WINDOW_UNDECORATED); // removes titel and frame of window
	InitWindow(193, 56, "Raylib"); // starts the window
	SetTargetFPS(0); // sets target fps 0 is infinity
	//	ToggleBorderlessWindowed(); // Enables borderless fullscreen
    while (!WindowShouldClose()) // runs while the window shouldn't be closed
    {
		//DoGameTick()
        BeginDrawing(); // starts drawing the game all drawing things in here
		SetWindowPosition(0, 0); // moves window to x 0; y 0
        ClearBackground(BLACK); //clears the background/screen and makes it black
		if (IsKeyDown(KEY_ENTER)) DrawText("Hello, Raylib!", 2, 2, 30, SKYBLUE); // checks if enter is pressed and when it is pressed shows text
		DrawFPS(2, 34); // draws fps	
        EndDrawing(); // stops drawing
    }

    CloseWindow(); // closes the window
    return 0;
}