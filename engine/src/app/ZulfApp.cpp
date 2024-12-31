#include <ZulfEngine.h>

#include "sdl/app/SDLZulfApp.h"

ZulfEngine::ZulfApp::ZulfApp() = default;

std::unique_ptr<ZulfEngine::ZulfApp> ZulfEngine::ZulfApp::createApplication(int width, int height, const char* title) {
    // Only SDL exists for now
    return std::make_unique<SDLZulfApp>(width, height, title);
}



