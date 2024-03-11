cmake_minimum_required(VERSION 3.27.0)
project(yush VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SRC_FILES ./src/doing/013.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})
