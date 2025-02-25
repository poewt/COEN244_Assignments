cmake_minimum_required(VERSION 3.28.1)
project(Problem_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Problem_2 main.cpp
        Point.cpp
        Point.h
        Polygon.cpp
        Polygon.h
        Quadrilateral.cpp
        Quadrilateral.h
        Parallelogram.cpp
        Parallelogram.h)
