#include <ZulfEngine.h>

#include "sdl/app/SDLZulfApp.h"

void ZulfEngine::ZulfApp::CreateWindow(int width, int height, const char *title) {
    window = CreateWindowImpl(width, height, title);
}


std::unique_ptr<ZulfEngine::ZulfApp> ZulfEngine::ZulfApp::createApplication() {
    // Only SDL exists for now
    return std::make_unique<SDLZulfApp>();
}



