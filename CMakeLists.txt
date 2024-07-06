cmake_minimum_required(VERSION 3.20)
project(ecma262 VERSION 0.0.1 LANGUAGES CXX)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含子目录
add_subdirectory(src)
add_subdirectory(tests)
# add_subdirectory(examples)