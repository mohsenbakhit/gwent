cmake_minimum_required(VERSION 3.10)

project(Gwent VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(gwent
    main.cpp
)

target_include_directories(gwent PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
