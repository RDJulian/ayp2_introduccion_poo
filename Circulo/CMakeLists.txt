cmake_minimum_required(VERSION 3.22)
project(ayp2_introduccion_poo)

set(CMAKE_CXX_STANDARD 23)

add_compile_options(-Wall -Werror -Wconversion)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../")
set(CXXFLAGS "-Wall -Werror -Wconversion")
set(CMAKE_CXX_FLAGS "${CXXFLAGS}")

add_executable(ayp2_introduccion_poo
        main.cpp
        Circulo.cpp
        Circulo.hpp
        Punto.cpp
        Punto.hpp)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "programa.exe")