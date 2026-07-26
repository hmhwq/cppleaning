#include <iostream>
#include <iomanip>
#include <cmath>
#include <gsl/gsl_integration.h> // 引入 GSL 数值积分头文件

// 1. 定义被积函数 f(x) = ln(x) / (1 + x)
// GSL 要求被积函数必须符合 double f(double x, void * params) 的格式
double my_integrand(double x, void * params) {
    // 如果有额外参数可以通过 params 传入，这里设为未使用
    (void)(params); 
    return std::log(x) / (1.0 + x);
}

int main() {
    // 2. 为 GSL 积分器分配工作空间（内存）
    gsl_integration_workspace * w = gsl_integration_workspace_alloc(1000);

    double result, error;
    double expected = -M_PI * M_PI / 12.0; // 理论精确值 -pi^2 / 12

    // 3. 将被积函数封装为 GSL 的 function 结构体
    gsl_function F;
    F.function = &my_integrand;
    F.params = nullptr;

    // 4. 调用 QAGS 自适应积分算法计算从 0 到 1 的定积分
    // 参数含义：&F, 下限 0, 上限 1, 绝对误差容限 0, 相对误差容限 1e-7, 最大子区间数 1000, 工作空间, 结果输出, 误差输出
    gsl_integration_qags(&F, 0, 1, 0, 1e-7, 1000, w, &result, &error);

    // 5. 打印结果
    std::cout << std::fixed << std::setprecision(8);
    std::cout << "--- GSL 数值积分测试 ---" << std::endl;
    std::cout << "GSL 计算数值解: " << result << std::endl;
    std::cout << "理论精确解析解: " << expected << std::endl;
    std::cout << "估计的数值误差: " << error << std::endl;

    // 6. 释放工作空间内存
    gsl_integration_workspace_free(w);

    return 0;
}