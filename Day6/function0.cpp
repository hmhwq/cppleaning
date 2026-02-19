/**
 * @file function0.cpp
 * @author HMHWQ
 * @brief 用这个学函数的基础知识
 * @version 0.1
 * @date 2026-02-15 09:08
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
using namespace std;
int add(int a,int b);
/**
 * @brief 实现两个数相加 
 * 
 * @param int a int b 两个int
 * @return int 返回两个参数相加后的值
 */
int add(int a,int b) {
    return a + b;
}
int main() {

    cout << add(11,22) << endl;

    system("pause");
    return 0;
}