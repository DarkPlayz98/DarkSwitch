cmake_minimum_required(VERSION 3.16)
project(DarkSwitch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(darkswitch
    src/main.cpp
    src/emulator.cpp
    src/memory.cpp
    src/cpu.cpp
)

target_include_directories(darkswitch PRIVATE include)
