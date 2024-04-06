#include "SDLWindow.h"
#include <SDL.h>
#include <string>

WindowImpl::WindowRef SDLWindow::CreateWindow()
{
	SDL_CreateWindow(WindowImpl::title, 0, 0, WindowImpl::width, WindowImpl::height, SDL_WINDOW_OPENGL);
	WindowRef windowRef {
		width,
		height
	};
	return windowRef;
}
