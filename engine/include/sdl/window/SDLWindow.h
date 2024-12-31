#pragma once
#include <SDL_video.h>

#include "Graphics/window/WindowImpl.h"

class SDLWindow : public WindowImpl {
public:// Declaration

	SDLWindow(int width, int height, const char *title);

	void Destroy() override;
	void Show() override;

protected:
	// raw pointer. do I need unique_ptr for this?
	SDL_Window* window;
};
