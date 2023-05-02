cmake_minimum_required(VERSION 3.18)

# set the project name and version
project(
  CPPStarter
  VERSION 0.2.0
)

# Enforce C++ standar version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure files based on CMake configuration options
add_subdirectory(configured_files)

# Adding the src:
add_subdirectory(src)