cmake_minimum_required(VERSION 3.21)
project(GameObjects_Structure)

set(CMAKE_CXX_STANDARD 14)

set(ENGINE_SOURCES
        "main.cpp"
        )

add_executable(Shooter ${ENGINE_SOURCES})
