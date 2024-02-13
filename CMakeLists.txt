cmake_minimum_required(VERSION 3.10)

project(zengon)

set(CMAKE_CXX_STANDARD 11)

add_executable(zengon main.cpp)

find_package(SDL2 REQUIRED)
target_include_directories(zengon PRIVATE ${SDL2_INCLUDE_DIRS})
target_link_libraries(zengon PRIVATE SDL2::SDL2)

# Optionally, you may add the following lines if needed
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -std=c++11")

# Custom target to clean build directory
add_custom_target(clear COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/build)

# Custom target to install executable
add_custom_target(install_target COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/build && ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/zengon ${CMAKE_BINARY_DIR}/build/zengon)
