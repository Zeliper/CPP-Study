#pragma once
#include "SDL.h"

class Window {
public:
	Window();
	~Window();

	void INIT(const char* title,int w, int h);
	void DrawPointF(float x, float y);
	void DrawLineF(float x1, float y1, float x2, float y2);
	void DrawCircle(float x, float y, float rad);
	void Render();
	int Width();
	int Height();

public:
	SDL_Window* pWindow;
	SDL_Renderer* pRenderer;
	SDL_bool done;
	int MouseX, MouseY;
};