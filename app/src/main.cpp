#include <ZulfEngine.h>

int main() {
    auto zulfApp = ZulfEngine::ZulfApp::createApplication(800, 600, "testing!!");
    zulfApp->GetWindow()->Show();
    zulfApp->Run();
}


