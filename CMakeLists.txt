cmake_minimum_required(VERSION 3.16)
project(cppleaning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 默认 Debug 构建模式（未指定时）
# if(NOT CMAKE_BUILD_TYPE)
#     set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
# endif()

# 编译选项
# add_compile_options(-Wall -Wextra -Werror -g)
add_compile_options(-Wall -Wextra -g)

# GSL 库（可选，未安装时跳过 GSL 示例）
find_package(GSL QUIET)

# ============================================================
# 工具函数：为一组 .cpp 文件各生成一个独立可执行目标
#   用法: add_single_targets(dir file1.cpp file2.cpp ...)
# ============================================================
function(add_single_targets dir)
    foreach(src ${ARGN})
        get_filename_component(name ${src} NAME_WE)
        # 目标名不能含 / 和非 ASCII，用 MAKE_C_IDENTIFIER 清洗并统一前缀
        string(MAKE_C_IDENTIFIER "${dir}/${name}" target)
        add_executable(${target} ${dir}/${src})
        target_include_directories(${target} PRIVATE ${dir})
    endforeach()
endfunction()

# ============================================================
# 工具函数：多文件项目（目录内所有 .cpp 链接为一个可执行文件）
#   用法: add_multi_target(dir)
# ============================================================
function(add_multi_target dir)
    file(GLOB sources "${dir}/*.cpp")
    get_filename_component(name ${dir} NAME)
    add_executable(${name} ${sources})
    target_include_directories(${name} PRIVATE ${dir})
endfunction()

# ============================================================
# Day1  — Hello World
# ============================================================
add_single_targets(Day1 helloworld.cpp)

# ============================================================
# Day2  — 变量创建、常量与宏
# ============================================================
add_single_targets(Day2 bianliangchuangjian.cpp chnagliang.cpp)

# ============================================================
# Day3  — 三目运算符
# ============================================================
add_single_targets(Day3 sanmu.cpp sanzhixioazhu.cpp)

# ============================================================
# Day4  — 数组、goto
# ============================================================
add_single_targets(Day4 arr.cpp erweishuzu.cpp goto.cpp zuizhongxiaozhu.cpp)

# ============================================================
# Day5  — vector、accumulate、字符串
# ============================================================
add_single_targets(Day5 chengji.cpp)

# ============================================================
# Day6  — 函数定义、值传递
# ============================================================
add_single_targets(Day6 function0.cpp zhichuandi.cpp)

# ============================================================
# Day7  — 多文件编译 + 指针入门
# ============================================================
add_multi_target(Day7/duowenjian)
add_single_targets(Day7/zhizhen zhizhen1.cpp zhizhen2.cpp)

# ============================================================
# Day8  — 指针深入
# ============================================================
add_single_targets(Day8 1.cpp zhizhen3.cpp)

# ============================================================
# Day9  — 指针与函数、结构体定义、案例
# ============================================================
add_single_targets(Day9/zhizhenhehanshu 1.cpp)
add_single_targets(Day9/jiegou jiegoudingyi.cpp)
add_single_targets(Day9/anli anli.cpp)

# ============================================================
# Day10 — 结构体数组/指针/嵌套
# ============================================================
add_single_targets(Day10 anli1.cpp jiegoutiqiantao.cpp jiegoutishuzu.cpp jiegoutizhizhen.cpp)

# ============================================================
# Day11 — 结构体案例
# ============================================================
add_single_targets(Day11 1.cpp)

# ============================================================
# Day12 — 结构体、冒泡排序、GSL 积分
# ============================================================
add_single_targets(Day12 案例1.cpp 案例2.cpp 结构体指针.cpp 结构体作为函数参数.cpp maopao.cpp)
if(GSL_FOUND)
    add_single_targets(Day12 gsl_integration_demo.cpp test_gsl.cpp)
    foreach(tgt Day12_gsl_integration_demo Day12_test_gsl)
        if(TARGET ${tgt})
            target_link_libraries(${tgt} PRIVATE GSL::gsl GSL::gslcblas)
        endif()
    endforeach()
else()
    message(WARNING "GSL 未安装，跳过 Day12 GSL 示例。安装: sudo apt install libgsl-dev")
endif()

# ============================================================
# Day13 — 内存四区、引用
# ============================================================
add_single_targets(Day13 堆区.cpp 静态局部变量.cpp 引用做函数的返回值.cpp)

# ============================================================
# Day15 — 类和对象（封装）
# ============================================================
add_single_targets(Day15 封装的意义.cpp 设计立方体类.cpp 学生类.cpp)


# ============================================================
# Day16
# ============================================================
add_single_targets(Day16 1.cpp)


# ============================================================
# Day17
# ============================================================
add_single_targets(Day17 gouzao_xigou_function.cpp)