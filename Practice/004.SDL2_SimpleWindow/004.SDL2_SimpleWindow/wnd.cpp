#include "wnd.h"

Window::Window() {
	pWindow = NULL;
	pRenderer = NULL;
	MouseX = 0;
	MouseY = 0;
	done = SDL_FALSE;
}

Window::~Window() {
	SDL_DestroyWindow(pWindow);
	SDL_Quit();
}

//초기화 함수
void Window::INIT(const char* title,int w, int h) {
	SDL_Init(SDL_INIT_VIDEO);
	pWindow = SDL_CreateWindow(
		title,
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		w, h,
		SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
	pRenderer = SDL_CreateRenderer(pWindow, NULL, NULL);
}

//점 그리는 함수
void Window::DrawPointF(float x, float y) {
	SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderDrawPointF(pRenderer, x, y);
}

//선 그리는 함수
void Window::DrawLineF(float x1, float y1, float x2, float y2) {
	SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderDrawLineF(pRenderer, x1, y1, x2, y2);
}

//프로그램 화면 출력 부분
void Window::Render() {
	SDL_RenderPresent(pRenderer);
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		SDL_GetMouseState(&MouseX, &MouseY);
		if (event.type == SDL_QUIT) {
			done = SDL_TRUE;
		}
	}
}

void Window::DrawCircle(float x, float y, float rad) {
	SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
	for (int t = 0; t < 1080; t++) {
		if (t < 360) {
			int pointx = x + rad * cos(t);
			int pointy = y + rad * sin(t);
			DrawPointF(pointx, pointy);
		}
	}
}

int Window::Width() {
	return SDL_GetWindowSurface(pWindow)->w;
}
int Window::Height() {
	return SDL_GetWindowSurface(pWindow)->h;
}