#include <iostream>
#include <ZulfEngine.h>
#include <event/ZulfKeyboardEvent.h>

using namespace ZulfEngine;

int main() {

    auto zulfApp = ZulfApp::createApplication();

    zulfApp->CreateWindow(800, 600, "ZulfEngine")
            .Show();

    zulfApp->GetEventDispatcher().RegisterEventHandler<WindowCloseEvent>([&zulfApp](auto& event) {
        std::cout << "Handled WindowCloseEvent: " << event.GetName() << std::endl;
        zulfApp->Quit();
    });

    zulfApp->GetEventDispatcher().RegisterEventHandler<KeyDownEvent>([](auto& event) {
        std::cout << "pressed key " << static_cast<char>(event.GetKey()) << std::endl;
    });

    zulfApp->Update();

}




