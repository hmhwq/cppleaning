# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

这是一个从零开始学习 C++ 的个人练习仓库（cppleaning），按天组织学习内容（Day1–Day15），跟随 B站「黑马程序员 C++」视频课程循序渐进。

已覆盖主题：基础语法 → 数组 → 指针 → 结构体 → 内存模型 → 引用 → 函数高级 → 类和对象（封装）。

项目已从 Windows 迁移到 WSL-Ubuntu 环境。

## Build & Run

使用 VS Code 的 tasks.json 中配置的 g++（C++17，含 `-Werror`）：

```bash
g++ -fdiagnostics-color=always -g -Wall -Wextra -Werror -std=c++17 <source.cpp> -o <output_binary>
```

多文件编译（手动命令行）：
```bash
g++ -std=c++17 -g -Wall -Wextra -Werror *.cpp -o <output>
```

分开编译再链接：
```bash
g++ -std=c++17 -g -Wall -Wextra -Werror -c main.cpp -o main.o
g++ -std=c++17 -g -Wall -Wextra -Werror -c math.cpp -o math.o
g++ main.o math.o -o main
```

GSL 库链接（Day12 的 GSL 数值积分示例）：
```bash
g++ -std=c++17 -g -Wall -Wextra -Werror test_gsl.cpp -o test_gsl -lgsl -lgslcblas -lm
```

VS Code 中 `Ctrl+Shift+B` 触发默认 build task（编译当前目录所有 .cpp），`F5` 启动调试（gdb）。

## Project Structure

```
Day1/    — Hello World, 头文件引用
Day2/    — 变量创建、常量与宏 (#define, const)
Day3/    — 三目运算符、宏定义比较
Day4/    — 一维数组、二维数组、goto 语句
Day5/    — vector 二维数组，accumulate 求和，字符串处理
Day6/    — 函数定义与值传递
Day7/    — 多文件编译练习（duowenjian/）、指针入门（zhizhen/）
Day8/    — 指针深入（const 修饰指针、指针与数组）
Day9/    — 指针与函数（zhizhenhehanshu/）、结构体定义（jiegou/）、结构体案例（anli/）
Day10/   — 结构体数组、结构体指针、结构体嵌套
Day11/   — 结构体案例练习
Day12/   — 结构体指针、结构体作为函数参数、冒泡排序、结构体案例、GSL 数值积分
Day13/   — 内存四区模型、new/delete、堆区与栈区、引用（别名/常量引用）、引用本质
Day14/   — 函数高级：默认参数、占位参数、函数重载及注意事项
Day15/   — 类和对象：封装（public/private/protected）、成员、struct 与 class 区别
.vscode/ — VS Code 配置：build task、launch/debug、code snippets、SFTP
```

## VS Code Configuration

- **`.vscode/tasks.json`** — 两个 build task，均含 `-Wall -Wextra -Werror`。默认任务编译当前目录所有 `*.cpp`（单文件/多文件通用），备用任务仅编译当前活动文件。已加入 GSL 库链接支持
- **`.vscode/launch.json`** — gdb 调试配置，`preLaunchTask` 在调试前自动编译
- **`.vscode/cpppeizhi.code-snippets`** — 代码片段：文件头注释 (`head`)、main 模板 (`main`)、算法竞赛模板 (`#cp`)、for 循环、class/struct 等
- **`.vscode/sftp.json`** — SFTP 远程同步配置（host: 180.209.5.51），设置 `uploadOnSave: true`

## Code Conventions

- 使用 `using namespace std;`（注意正确写法为 `using` 非 `useing`）
- 文件头使用 Doxygen 风格注释（`@file`, `@author HMHWQ`, `@brief`, `@date` 等）
- 源文件内混合中英文注释
- Day5 起使用 `cin.get()` 替代 `system("pause")`（跨平台）
- 编译产物（`.exe` 及无后缀二进制）被提交到了仓库中
- Day13/Day14 部分内容以 `.md` 笔记形式记录，无对应 `.cpp` 文件
- Day7/Day9 使用子目录组织多文件示例

## Conda Environments

Anaconda3 安装于 `/home/hmhwq/anaconda3/`，conda 版本 25.5.1。

| 环境名 | 路径 | 用途 |
|--------|------|------|
| `base` | `/home/hmhwq/anaconda3` | 默认环境，Python + 科学计算全家桶 (numpy, scipy, matplotlib, pandas, astropy 等)，另有 jupyter, black, bokeh, altair, conda 生态工具 |
| `docx2tex` | `.../envs/docx2tex` | Word 转 LaTeX：python-docx, PyMuPDF, lxml, pillow |
| `my-manim-environment` | `.../envs/my-manim-environment` | Manim 动画引擎：manim, av, cloup, cryptography |
| `vasp_tools` | `.../envs/vasp_tools` | DFT/VASP 计算工具：ase, matplotlib, monty, bibtexparser |

激活方式：`conda activate <环境名>`

base 环境的 Python 为 3.12.3（系统另有 python3 可能冲突，注意 PATH）。

## Development Environment

- **OS**: Linux (WSL-Ubuntu, Cinnamon 桌面)
- **Terminal**: Ghostty（通过 systemd 后台服务运行，`--gtk-single-instance=true`）
- **File Manager**: Nemo
- **Shell**: zsh
- .vscode/settings.json 尚未创建
