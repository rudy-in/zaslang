cmake_minimum_required(VERSION 3.0)
project(zaslang)

set(CMAKE_CXX_STANDARD 26)

add_executable(zaslang main.cpp
        lexer.cpp
        parser.cpp
        parser.h
        ast.h
)
