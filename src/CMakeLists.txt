# add the executable
add_executable(CPPStarter main.cpp)

target_include_directories(CPPStarter PRIVATE "${CMAKE_BINARY_DIR}/configured_files/include")