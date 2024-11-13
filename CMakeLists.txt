cmake_minimum_required(VERSION 3.31)

project(
    lesson1
    VERSION 1.0
    DESCRIPTION "Main_Project"
    LANGUAGES CXX
) 

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lesson1)

set(sources main.cpp Car.h Car.cpp)

target_sources(lesson1 PRIVATE ${sources})