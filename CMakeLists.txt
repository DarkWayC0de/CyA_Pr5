cmake_minimum_required(VERSION 3.12)
project(Pr5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Pr5
        cadena.cpp
        cadena.hpp
        Lenguaje.cpp
        Lenguaje.hpp
        main.cpp)
