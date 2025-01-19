#pragma once
#include <memory>

#include "event/ZulfEvent.h"
#include "graphics/window/WindowImpl.h"

namespace ZulfEngine {

    class ZulfApp {

    public:

        ZulfApp();

        virtual ~ZulfApp() = default;

        virtual void Update() = 0;

        // no need to transfer ownership as we are temporarily
        [[nodiscard]] WindowImpl* GetWindow() const;
        WindowImpl& CreateWindow(int width, int height, const char* title);

        [[nodiscard]] EventDispatcher& GetEventDispatcher() const;

        static std::unique_ptr<ZulfApp> createApplication();

        void Quit();

    protected:
        virtual std::unique_ptr<WindowImpl> CreateWindowImpl(int width, int height, const char* title) = 0;
        bool running = true;
        std::unique_ptr<WindowImpl> window;
        std::unique_ptr<EventDispatcher> eventDispatcher;
    };


};
