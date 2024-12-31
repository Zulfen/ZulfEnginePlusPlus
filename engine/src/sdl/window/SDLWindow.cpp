#include "sdl/window/SDLWindow.h"
#include <SDL.h>
#include "graphics/window/WindowImpl.h"


SDLWindow::SDLWindow(int width, int height, const char *title): WindowImpl(width, height, title) {
    window = SDL_CreateWindow(title, 100, 100, width, height, SDL_WINDOW_OPENGL);
}

void SDLWindow::Destroy() {
    if (window) {
        SDL_DestroyWindow(window);
    }
}

void SDLWindow::Show() {
    SDL_ShowWindow(window);
}

