cmake_minimum_required(VERSION 3.10)
project(ZulfEngine)

# Set the directory where CMake should search for SDL2
set(SDL2_DIR "${CMAKE_SOURCE_DIR}/vendor/SDL2/SDL2-2.30.2/cmake")
message(${SDL2_DIR})

# Add executable
add_executable(ZulfEngine)

# Add all .cpp and .h files in the src directory to the target
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")
target_sources(ZulfEngine PRIVATE ${SOURCES})

# Specify include directory for just your src
target_include_directories(ZulfEngine PRIVATE src)

# Find SDL2
find_package(SDL2 REQUIRED)

# Include SDL2 headers
include_directories(${SDL2_INCLUDE_DIRS})

# Link SDL2 libraries
target_link_libraries(ZulfEngine ${SDL2_LIBRARIES})
