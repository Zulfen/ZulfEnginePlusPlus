#pragma once
#include <memory>
#include <SDL_video.h>

#include "Graphics/window/WindowImpl.h"

namespace ZulfEngine {
	class SDLWindow : public WindowImpl {
	public:
		SDLWindow(int width, int height, const char* title);

		void Destroy() override;
		void Show() override;

	protected:
		std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> sdlWindowHandle;
	};
}
