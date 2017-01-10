cmake_minimum_required(VERSION 3.6)
project(JukeBox)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp JukeBox.h JukeBox.cpp)
add_executable(JukeBox ${SOURCE_FILES})