cmake_minimum_required(VERSION 3.30)
project(ZasLanguage)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(LLVM REQUIRED CONFIG)

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

set(SOURCE_FILES
    main.cpp
    lexer/lexer.h
    lexer/lexer.cpp
    parser/parser.h
    parser/parser.cpp
    parser/ast.h
    parser/ast.cpp
)

add_executable(Zas ${SOURCE_FILES})

llvm_map_components_to_libnames(llvm_libs core executionengine native)
target_link_libraries(Zas ${llvm_libs})
