cmake_minimum_required(VERSION 3.10)
project(Application)

# Add application executable
add_executable(MyApplication src/main.cpp)

# Link ZulfEngine to the application
target_link_libraries(MyApplication PRIVATE ZulfEngine)

# Add include directories for the application
target_include_directories(MyApplication PRIVATE
        ${CMAKE_SOURCE_DIR}/engine/include
)

target_include_directories(MyApplication PRIVATE
        ${CMAKE_SOURCE_DIR}/app/include
)