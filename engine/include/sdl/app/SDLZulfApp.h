#pragma once
#include <SDL_events.h>
#include <ZulfEngine.h>

class SDLZulfApp : public ZulfEngine::ZulfApp {
public:
    // Constructor initializing the width, height, and title
    SDLZulfApp(int width, int height, const char* title)
        : windowWidth(width), windowHeight(height), windowTitle(title) {}

    // Destructor (compiler will generate one, but you can define it if necessary)
    ~SDLZulfApp() override = default; // If no special cleanup is needed, this is fine

    // Implement the pure virtual 'Run' method with the SDL event loop
    void Run() override {
        // Example SDL event loop (you might need to adapt based on your needs)
        bool running = true;
        SDL_Event event;

        while (running) {
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_QUIT) {
                    running = false;
                }
            }

            // Perform other app operations like rendering, updating game state, etc.
        }
    }

protected:
    std::unique_ptr<WindowImpl> GetWindowImpl() override {
        // Create and return an SDLWindow (inherits from WindowImpl)
        auto sdlWindow = std::make_unique<SDLWindow>(windowWidth, windowHeight, windowTitle);
        return std::move(sdlWindow); // Return ownership to the base class
    }

private:
    int windowWidth;   // Window width
    int windowHeight;  // Window height
    const char* windowTitle;  // Window title
};
