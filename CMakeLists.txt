cmake_minimum_required(VERSION 3.28)
project(snake VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)

include_directories(include)

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

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(snake ${SRC_FILES}
        src/use_imgui.cpp)

target_link_libraries(snake PRIVATE glad::glad)
target_link_libraries(snake PRIVATE glfw)
target_link_libraries(snake PRIVATE imgui::imgui)