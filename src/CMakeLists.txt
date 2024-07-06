# 指定库输出目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 指定源文件目录
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_PATH)

# 添加库
add_library(ecma262 SHARED ${SRC_PATH})

# 指定头文件目录
target_include_directories(ecma262 PRIVATE ${PROJECT_SOURCE_DIR}/include)
