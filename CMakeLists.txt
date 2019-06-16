cmake_minimum_required(VERSION 3.14)
project(H-J)

set(CMAKE_CXX_STANDARD 17)

add_executable(H-J main.cpp src/Generation/Generator.cpp src/Generation/Generator.h src/Sorts/AbsractSort.h src/Sorts/AbsractSort.cpp )
