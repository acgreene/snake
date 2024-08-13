cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)

include_directories(include)

project(snake VERSION 1.0)
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(snake ${SRC_FILES})