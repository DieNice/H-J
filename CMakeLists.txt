cmake_minimum_required(VERSION 3.14)
project(H-J)

set(CMAKE_CXX_STANDARD 17)

add_executable(H-J main.cpp src/Generation/Generator.cpp src/Generation/Generator.h src/Sorts/Sort.h src/Sorts/Sort.cpp src/Generation/GuiSuequenceFeatureReader.h src/Generation/GuiSuequenceFiatureReader.cpp src/Generation/InterfaceSequences.h src/Generation/Sequences.cpp src/Sorts/MakerGistograms.h src/Sorts/MakerGistograms.cpp src/Sorts/ReaderSequncesFiles.h src/Sorts/ReaderSequncesFiles.cpp)
