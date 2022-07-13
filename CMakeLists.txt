cmake_minimum_required(VERSION 3.21)
project(my_cpp_std)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(my_cpp_std
        logisticregression.h
        common.h
        main.cpp)
