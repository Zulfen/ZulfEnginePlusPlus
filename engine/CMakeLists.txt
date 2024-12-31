cmake_minimum_required(VERSION 3.10)
project(ZulfEngine)

# Add library target for ZulfEngine
add_library(ZulfEngine STATIC)

# Gather engine sources
file(GLOB_RECURSE ENGINE_SOURCES "src/*.cpp")
file(GLOB_RECURSE ENGINE_HEADERS "include/*.h")

# Add sources to the library
target_sources(ZulfEngine PRIVATE ${ENGINE_SOURCES} PUBLIC ${ENGINE_HEADERS})

# Use find_package to locate SDL2 (if needed)
find_package(SDL2 REQUIRED)

# Include directories for the engine
target_include_directories(ZulfEngine PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${SDL2_INCLUDE_DIRS}  # Include SDL2 headers found by find_package
)

# Link SDL2 to the engine
target_link_libraries(ZulfEngine PRIVATE ${SDL2_LIBRARIES})
