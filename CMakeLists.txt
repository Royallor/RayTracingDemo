cmake_minimum_required(VERSION 3.21)
project(RayTracingDemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(RayTracingDemo
        include/vec3.h
        src/main.cpp)
