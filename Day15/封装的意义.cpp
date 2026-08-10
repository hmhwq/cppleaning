#include <iostream>
using namespace std;

const double PI = 3.14;
class Circle
{
public:
    /// @brief 圆的半径
    int m_r;
    double caculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    Circle c1;
    c1.m_r = 10;
    cout << c1.caculateZC() << endl;

    cin.get();
    return 0;
}