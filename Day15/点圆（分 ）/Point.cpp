#include "Point.h"
#include "Circle.h" // 内部要调用 c1.getCenter() 和 c1.getR()，所以此处必须包含 Circle.h

void Point::setX(int x)
{
    m_x = x;
}

int Point::getX() const
{
    return m_x;
}

void Point::setY(int y)
{
    m_y = y;
}

int Point::getY() const
{
    return m_y;
}

bool Point::isInCircle(const Circle &c1) const
{
    Point center = c1.getCenter();
    int r = c1.getR();

    // 计算点与圆心的距离平方
    int distanceSq = (m_x - center.getX()) * (m_x - center.getX()) +
                     (m_y - center.getY()) * (m_y - center.getY());

    return distanceSq <= r * r;
}