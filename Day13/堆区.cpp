#include <iostream>
using namespace std;
/**
 * @brief 返回一个指针
 *
 * @param () 没参数
 * @return &a a的地址
 */
int *fun()
{
    // int a = 10;
    // return &a;
    int *p = new int(10);
    return p;
}
int main()
{
    int *p = fun();
    cout << *p << endl;
    cout << *p << endl;
    cin.get();
    return 0;
}