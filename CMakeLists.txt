cmake_minimum_required(VERSION 3.10)
project(Project LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add any C targets here, for example:
# add_executable(myprog src/main.c)

add_subdirectory(src)