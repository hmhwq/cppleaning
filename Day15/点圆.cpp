#include <iostream>
#include <cmath>
using namespace std;

// 1. 前向声明 Circle 类
class Circle;

// 2. 定义 Point 类
class Point
{
public:
    void setX(int x)
    {
        m_x = x;
    }
    int getX() const
    {
        return m_x;
    }

    void setY(int y)
    {
        m_y = y;
    }
    int getY() const
    {
        return m_y;
    }

    // 在类内只写函数声明，不写具体实现
    bool isInCircle(const Circle &c1) const;

private:
    int m_x;
    int m_y;
};

// 3. 定义 Circle 类
class Circle
{
public:
    void setCenter(Point center)
    {
        m_Center = center;
    }
    Point getCenter() const
    {
        return m_Center;
    } // 加上 const 修饰

    void setR(int r)
    {
        m_r = r;
    }
    int getR() const
    {
        return m_r;
    } // 提供获取半径的接口

private:
    int m_r;
    Point m_Center;
};

// 4. 在 Circle 类定义之后，实现 Point::isInCircle 函数
bool Point::isInCircle(const Circle &c1) const
{
    Point center = c1.getCenter();
    int r = c1.getR();

    // 计算点与圆心的距离平方
    int distanceSq = (m_x - center.getX()) * (m_x - center.getX()) +
                     (m_y - center.getY()) * (m_y - center.getY());

    // 比较距离平方与半径平方
    if (distanceSq <= r * r)
    {
        return true; // 在圆内或圆上
    }
    return false; // 在圆外
}

int main()
{
    // 测试代码
    Circle c;
    Point center;
    center.setX(0);
    center.setY(0);
    c.setCenter(center);
    c.setR(5);

    Point p;
    p.setX(3);
    p.setY(4);

    if (p.isInCircle(c))
    {
        cout << "点在圆内或圆上" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }

    cin.get();
    return 0;
}