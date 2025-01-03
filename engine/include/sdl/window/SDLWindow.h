#pragma once
#include <SDL_video.h>

#include "Graphics/window/WindowImpl.h"

class SDLWindow : public WindowImpl {
public:
	SDLWindow(int width, int height, const char *title); // Declaration

	WindowRef CreateWindow() override;
	void DestroyWindow() override;

protected:
	// raw pointer. do I need unique_ptr for this?
	SDL_Window* window{};
};
