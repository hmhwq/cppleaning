#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 10;
    
    int* const p1 = &a;
    (void)p1;  // 演示 const 指针：指向不可改
    // p1 = &b;

    const int * p2 = &a;
    (void)p2;  // 演示指向 const 数据的指针
    p2 = &b;

    const int* const p3 = &a;
    (void)p3;  // 演示双重 const 指针
    

    cin.get();
    return 0;
}