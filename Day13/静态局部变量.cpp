#include <iostream>

void countCalls()
{
    static int count = 0; // 👈 静态局部变量，只会在第一次调用函数时初始化为 0
    ++count;
    std::cout << "函数被调用了 " << count << " 次" << std::endl;
}

int main()
{
    countCalls(); // 输出: 函数被调用了 1 次
    countCalls(); // 输出: 函数被调用了 2 次
    countCalls(); // 输出: 函数被调用了 3 次
    return 0;
}
