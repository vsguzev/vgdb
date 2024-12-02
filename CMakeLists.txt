cmake_minimum_required(VERSION 3.14)
project(vgdb VERSION 0.1.0 LANGUAGES CXX)

# Include CPM.cmake
include(cmake/CPM.cmake)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)

# Include additional modules (comment if you don't want them to build)
include(cmake/GTest.cmake)
