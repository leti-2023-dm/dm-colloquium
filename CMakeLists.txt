cmake_minimum_required(VERSION 3.25)
project(long_operations)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")

add_executable(long_operations ${SOURCES} ${HEADERS})
