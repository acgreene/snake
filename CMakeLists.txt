cmake_minimum_required(VERSION 3.28)
project(Snake VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED On)

find_package(SDL2 CONFIG REQUIRED)

add_executable(Snake
        src/main.cpp
        src/Snake.cpp
        include/Snake.h
        src/GameEngine.cpp
        include/GameEngine.h
        include/Gui.h
        src/Gui.cpp
)

target_link_libraries(Snake PRIVATE SDL2::SDL2)
target_include_directories(Snake PRIVATE include)