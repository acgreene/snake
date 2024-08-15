cmake_minimum_required(VERSION 3.28)
project(Snake VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)

if (NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    if (DEFINED ENV{VCPKG_ROOT})
        set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
    else ()
        message(FATAL_ERROR "Environment variable VCPKG_ROOT is not defined")
    endif ()
endif ()

find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)

add_executable(Snake
        src/main.cpp
        src/UseImGui.cpp
        include/UseImGui.h
        src/GameState.cpp
        include/GameState.h
        src/Snake.cpp
        include/Snake.h
        src/Game.cpp
        include/Game.h
)

target_link_libraries(Snake PRIVATE glad::glad)
target_link_libraries(Snake PRIVATE glfw)
target_link_libraries(Snake PRIVATE imgui::imgui)
target_include_directories(Snake PRIVATE include)