cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp Test.cpp Practice2.1.cpp main.cpp UsingNameSpace_use.cpp 2.4_ex.cpp 2.5_ex.cpp 2.6_ex.cpp 2.10_ex.cpp)
add_compile_definitions(LOCAL_DEBUG)
add_executable(Practice2.1 Practice2.1.cpp)
add_executable(Test Test.cpp)
add_executable(UsingNameSpace_use UsingNameSpace_use.cpp)
add_executable(2.4_ex 2.4_ex.cpp)
add_executable(2.5_ex 2.5_ex.cpp)
add_executable(2.6_ex 2.6_ex.cpp)
add_executable(2.10_ex 2.10_ex.cpp)