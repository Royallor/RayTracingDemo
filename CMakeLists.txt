cmake_minimum_required(VERSION 3.16)
project(RayTracingDemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(RayTracingDemo
        include/vec3.h
        src/main.cpp include/ray.h include/color.h)
