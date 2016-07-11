cmake_minimum_required(VERSION 3.5)
project(io_stream)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp)

add_executable(io_stream ${SOURCE_FILES})