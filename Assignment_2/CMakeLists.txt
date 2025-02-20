cmake_minimum_required(VERSION 3.29)
project(Assignment_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Assignment_2 testDriver.cpp
        basePlusCommission.cpp
        basePlusCommission.h
        commission.cpp
        commission.h
        testDriver.cpp)
