#include "sdl/window/SDLWindow.h"

#include <iostream>
#include <SDL.h>
#include "graphics/window/WindowImpl.h"


SDLWindow::SDLWindow(int width, int height, const char *title): WindowImpl(width, height, title) {
    sdlWindowHandle = SDL_CreateWindow(title, 100, 100, width, height, SDL_WINDOW_OPENGL);
}

void SDLWindow::Destroy() {
    if (sdlWindowHandle) {
        SDL_DestroyWindow(sdlWindowHandle);
        sdlWindowHandle = nullptr;
    }
}

void SDLWindow::Show() {
    SDL_ShowWindow(sdlWindowHandle);
}

