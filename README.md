# Check back here later!
A test application is in the `app` folder.

If you build this right now, you might need to drag `SDL2.dll` from `vendor/SDL2/SDL2-2.30.2/lib/(insert platform here)` to `cmake-build-debug/app` to run it!

Be warned, the only thing the engine can do right now is display a window...

## TODO:
- Get CMake to build properly on any machine, and not just CLion. I might need to change how I link SDL so that it doesn't immediately crash if you don't have the .dll in the same folder as the .exe.
- Get a basic event system done