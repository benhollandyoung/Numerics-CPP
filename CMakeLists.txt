cmake_minimum_required(VERSION 3.23)

project(Numerics VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(NewtonRaphson)
target_sources(NewtonRaphson
    PRIVATE
    nr.cpp
)

