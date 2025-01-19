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

if (WIN32)
    add_custom_command(TARGET MyApplication POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:SDL2::SDL2> # Path to the SDL2 DLL
            $<TARGET_FILE_DIR:MyApplication> # Destination folder (executable directory)
    )
endif()