# Set the minimum required cmake version
cmake_minimum_required(VERSION 3.27)

# Declare project
project(Example)

# Set your version here 
set(CMAKE_CXX_STANDARD 20)

# This will be containing all of your source files
add_library(Example SHARED Inject.cpp
        me.sleepy.example/Example.cpp
        me.sleepy.example/Example.h
)

# Add all libraries here
target_link_libraries(Example PRIVATE winmm)
