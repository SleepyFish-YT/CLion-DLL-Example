cmake_minimum_required(VERSION 3.27)
project(Example)

set(CMAKE_CXX_STANDARD 17)

add_library(Example SHARED Inject.cpp
        me.sleepy.example/Example.cpp
        me.sleepy.example/Examples.h
)
