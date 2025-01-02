#include "sdl/app/SDLZulfApp.h"

std::unique_ptr<WindowImpl> SDLZulfApp::CreateWindowImpl(int width, int height, const char *title) {
    return std::make_unique<SDLWindow>(width, height, title);
}

SDLZulfApp::~SDLZulfApp() {
    if (window) {
        window->Destroy();
    }
}
