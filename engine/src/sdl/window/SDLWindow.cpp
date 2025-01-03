#include "sdl/window/SDLWindow.h"
#include <SDL.h>
#include "graphics/window/WindowImpl.h"


// Constructor definition
SDLWindow::SDLWindow(int width, int height, const char *title): WindowImpl(width, height, title) {
}

// Define other methods here
WindowImpl::WindowRef SDLWindow::CreateWindow() {
    // SDL-specific window creation logic
    window = SDL_CreateWindow(title, 0, 0, width, height, SDL_WINDOW_OPENGL);
    const WindowRef windowRef {
        width,
        height
    };
    return windowRef;
}

void SDLWindow::DestroyWindow() {
    if (window) {
        SDL_DestroyWindow(window);
        window = nullptr; // Reset pointer to avoid dangling references
    }
}

