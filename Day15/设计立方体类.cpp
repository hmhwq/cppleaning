#include <iostream>
using namespace std;
#include <string>

/**
 * @brief 一个立方体类
 */
class Cube
{
private:
    int m_H = 1;
    int m_L = 1;
    int m_W = 1;

public:
    void setLWH(int L, int W, int H)
    {
        cout << "请输入立方体的长宽高" << endl;
        m_H = H;
        m_L = L;
        m_W = W;
    }

    int mian_ji()
    {
        return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
    }

    int ti_ji()
    {
        return m_H * m_L * m_W;
    }

    bool isequal(Cube c1, Cube c2) {}
};

int main()
{

    cin.get();
    return 0;
}