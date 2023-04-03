cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp Test.cpp Practice2.1.cpp main.cpp)
add_compile_definitions(LOCAL_DEBUG)
add_executable(Practice2.1 Practice2.1.cpp)
add_executable(Test Test.cpp)