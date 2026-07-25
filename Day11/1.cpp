/**
 * @file 1.cpp
 * @author HMHWQ
 * @brief 学习const修饰指针
 * @version 0.1
 * @date 2026-07-25 19:39
 * 
 * @copyright Copyright (c) 2026
 * 
 */


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 30;

    const int *p1 = &a;
    int * const p2 = &a;
    cout << *p1 << endl;
    cout << *p2 << endl;    
    // *p = 11; 这是错误的写法
    *p2 = 20;
    cout << *p1 << endl;    
    cout << *p2 << endl;


    p1 = &b;
    cout << *p1 << endl;
    cout << *p2 << endl;

    cin.get();
    return 0;
}