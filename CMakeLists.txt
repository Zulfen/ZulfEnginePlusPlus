cmake_minimum_required(VERSION 3.10)
project(ZulfEnginePlusPlus)

# Set the directory where CMake should search for SDL2
set(SDL2_DIR "${CMAKE_SOURCE_DIR}/vendor/SDL2/SDL2-2.30.2/cmake")
find_package(SDL2 REQUIRED)

# Add engine and application subdirectories
add_subdirectory(engine)
add_subdirectory(app)