cmake_minimum_required(VERSION 3.18)

# set the project name and version
project(CPPStarter VERSION 0.1)

# configure a header file to pass the version number
configure_file(src/AppConfig.h.in AppConfig.h)

# add the executable
add_executable(CPPStarter src/main.cpp)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(CPPStarter PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )