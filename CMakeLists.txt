cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp Test.cpp Practice2.1.cpp main.cpp UsingNameSpace_use.cpp 2.4_ex.cpp 2.5_ex.cpp 2.6_ex.cpp 2.10_ex.cpp  cmake-build-debug/Time_ex.cpp Time_ex.cpp Namecard.ex.cpp 2.14_ex.cpp Time_ex.cpp Time_ex.cpp 2.15_ex.cpp 2.16_ex.cpp qzObjectCopy.cpp Test2.cpp Test2.cpp student.cpp 2.17_ex.cpp BusClass.cpp EX_1.cpp EX_2.cpp)
add_compile_definitions(LOCAL_DEBUG)
add_executable(Practice2.1 Practice2.1.cpp cmake-build-debug/Time_ex.cpp)
add_executable(Test Test.cpp)
add_executable(UsingNameSpace_use UsingNameSpace_use.cpp)
add_executable(2.4_ex 2.4_ex.cpp)
add_executable(2.5_ex 2.5_ex.cpp)
add_executable(2.6_ex 2.6_ex.cpp)
add_executable(2.10_ex 2.10_ex.cpp cmake-build-debug/Time_ex.cpp Time_ex.cpp Time_ex.cpp Time_ex.cpp Test2.cpp cmake-build-debug/test.c)
add_executable(Time_ex Time_ex.cpp)
add_executable(Namecard.ex Namecard.ex.cpp)
add_executable(2.14_ex 2.14_ex.cpp)
add_executable(2.15_ex 2.15_ex.cpp)
add_executable(2.16_ex 2.16_ex.cpp)
add_executable(qzObjectCopy qzObjectCopy.cpp)
add_executable(Test2 Test2.cpp Test2.cpp)
add_executable(2.11_ex main.cpp Student.cpp Test2.cpp)

add_executable(2.17_ex 2.17_ex.cpp)
add_executable(BusClass BusClass.cpp)
add_executable(EX_1 EX_1.cpp)
add_executable(EX_2 EX_2.cpp)