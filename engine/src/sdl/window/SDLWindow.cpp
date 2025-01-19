#include "sdl/window/SDLWindow.h"

#include <SDL.h>
#include <stdexcept>

#include "graphics/window/WindowImpl.h"

namespace ZulfEngine {

    SDLWindow::SDLWindow(int width, int height, const char* title): WindowImpl(width, height, title),
      sdlWindowHandle(SDL_CreateWindow(title, 100, 100, width, height, SDL_WINDOW_OPENGL), SDL_DestroyWindow) {
        if (!sdlWindowHandle) {
            throw std::runtime_error("Failed to create SDL window");
        }
    }

    void SDLWindow::Destroy() {
        sdlWindowHandle.reset();
    }

    void SDLWindow::Show() {
        if (sdlWindowHandle) {
            SDL_ShowWindow(sdlWindowHandle.get());
        }
    }

    void SDLWindow::Hide() {
        if (sdlWindowHandle) {
            SDL_HideWindow(sdlWindowHandle.get());
        }
    }
}

