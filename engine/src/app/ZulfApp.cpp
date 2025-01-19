#include <iostream>
#include "sdl/app/SDLZulfApp.h"

namespace ZulfEngine {

    ZulfApp::ZulfApp() {
        eventDispatcher = std::make_unique<EventDispatcher>();
    }

    WindowImpl *ZulfApp::GetWindow() const {
        return window ? window.get() : nullptr;
    }

    void ZulfApp::CreateWindow(int width, int height, const char *title) {
        window = CreateWindowImpl(width, height, title);
    }

    EventDispatcher& ZulfApp::GetEventDispatcher() const {
        return *eventDispatcher;
    }

    std::unique_ptr<ZulfApp> ZulfApp::createApplication() {
        // Only SDL exists for now
        return std::make_unique<SDLZulfApp>();
    }

    void ZulfApp::Quit() {
        running = false;
    }

}





