# 1. 指定 CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 2. 项目名称
project(CirclePointDemo)

# 3. 设置 C++ 标准为 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. 自动收集当前目录下所有的 .cpp 源文件
file(GLOB SOURCES "*.cpp")

# 5. 生成目标可执行程序（名字叫 app）
add_executable(point_circle ${SOURCES})