cmake_minimum_required(VERSION 3.10)
project(Application)

# Find SDL2 (if installed via a package manager)
find_package(SDL2 REQUIRED)

# Add application executable
add_executable(MyApplication src/main.cpp)

# Link ZulfEngine and SDL2 to the application
target_link_libraries(MyApplication PRIVATE ZulfEngine SDL2::SDL2)

# Add include directories for the application
target_include_directories(MyApplication PRIVATE
        ${CMAKE_SOURCE_DIR}/engine/include
)

target_include_directories(MyApplication PRIVATE
        ${CMAKE_SOURCE_DIR}/app/include
)

message(STATUS "Found SDL2: ${SDL2_DIR}")
