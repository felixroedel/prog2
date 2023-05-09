cmake_minimum_required(VERSION 3.24)
project(database)

set(CMAKE_CXX_STANDARD 20)

add_executable(database main.cpp person.cpp person.h)
