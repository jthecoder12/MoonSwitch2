cmake_minimum_required(VERSION 3.5)

project(Moon_Switch_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

set(RAYLIB_VERSION 5.4.0)
find_package(raylib ${RAYLIB_VERSION} QUIET)

add_executable(Moon_Switch_2 src/main.cpp src/include/globalvalues.h)

target_link_libraries(${PROJECT_NAME} raylib m)
