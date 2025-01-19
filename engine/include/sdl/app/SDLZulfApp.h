#pragma once

#include "app/ZulfApp.h"

namespace ZulfEngine {
    class SDLZulfApp : public ZulfApp {
    public:

        // Implement the pure virtual 'Run' method with the SDL event loop
        void Update() override;

        ~SDLZulfApp() override;

        SDLZulfApp();

    protected:
        std::unique_ptr<WindowImpl> CreateWindowImpl(int width, int height, const char *title) override;
    };
}

