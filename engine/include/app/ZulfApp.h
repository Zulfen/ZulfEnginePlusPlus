#pragma once
#include <memory>

#include "graphics/window/WindowImpl.h"

namespace ZulfEngine {
    class ZulfApp {
    public:

        virtual ~ZulfApp() = default;

        virtual void Run() = 0;

        virtual WindowImpl* GetWindow() {
            if (!window) {
                window = GetWindowImpl();
            }
            return window.get();
        }

        ZulfApp();

        static std::unique_ptr<ZulfApp> createApplication(int width, int height, const char* title);

    protected:
        virtual std::unique_ptr<WindowImpl> GetWindowImpl() = 0;
        std::unique_ptr<WindowImpl> window;
    };

};
