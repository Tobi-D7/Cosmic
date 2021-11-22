cmake_minimum_required (VERSION 3.6)
project(Cosmic)

add_executable(Cosmic src/main.cpp)

add_subdirectory(deps/sleepy-discord)
target_link_libraries(Cosmic sleepy-discord)
