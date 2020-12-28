#include "SDL.h"
#include "wnd.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	Window* wnd = new Window();
	wnd->INIT("Title",720,540);
	while (!wnd->done) {
		if (wnd->MouseX > 0 && wnd->MouseY > 0) {
			SDL_SetRenderDrawColor(wnd->pRenderer, 0, 0, 0, 255);
			SDL_RenderClear(wnd->pRenderer);
			wnd->DrawCircle(wnd->MouseX, wnd->MouseY, 25);
		}
		
		wnd->DrawLineF(100, 100, 200, 100);
		wnd->DrawLineF(200, 100, 200, 200);
		wnd->DrawLineF(200, 200, 100, 200);
		wnd->DrawLineF(100, 200, 100, 100);

		if (wnd->MouseX > 100 && wnd->MouseX <200) {
			if (wnd->MouseY > 100 && wnd->MouseY < 200) {
				SDL_ShowSimpleMessageBox(NULL,
					"Getcha!",
					"I Find You",
					wnd->pWindow);
			}
		}


		//이 아래로는 건들지 마시욧!
		wnd->Render();
	}
	delete wnd;
	return 0;
}