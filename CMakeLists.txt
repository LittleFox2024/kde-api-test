cmake_minimum_required(VERSION 4.3)
project(kde_api_test)

set(CMAKE_CXX_STANDARD 20)

add_executable(kde_api_test main.cpp
        mainwindow.h
        mainwindow.cpp)
