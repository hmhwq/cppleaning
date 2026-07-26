#include <iostream>
#include <gsl/gsl_sf_bessel.h>

int main() {
    double x = 5.0;
    // 计算第一类 0 阶贝塞尔函数 J0(5.0)
    double y = gsl_sf_bessel_J0(x);
    
    std::cout << "GSL 测试成功！" << std::endl;
    std::cout << "J0(" << x << ") = " << y << std::endl;
    return 0;
}