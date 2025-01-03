#pragma once
#include <memory>

#include "graphics/window/WindowImpl.h"

namespace ZulfEngine {
    class ZulfApp {
    public:

        ZulfApp();

        virtual ~ZulfApp();

        virtual void Run();

        static std::unique_ptr<ZulfApp> createApplication(int width, int height, const char* title);

    protected:
        std::unique_ptr<WindowImpl> window;
    };

};
