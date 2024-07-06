# 指定可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 添加可执行文件
add_executable(ecma262_test main.cpp)

# 指定头文件目录
target_include_directories(ecma262_test PRIVATE ${PROJECT_SOURCE_DIR}/include)

# 指定链接库的目录
link_directories(${PROJECT_SOURCE_DIR}/lib)

# 链接库
target_link_libraries(ecma262_test PRIVATE ecma262)
