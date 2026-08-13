#include "Circle.h"

void Circle::setCenter(Point center)
{
    m_Center = center;
}

Point Circle::getCenter() const
{
    return m_Center;
}

void Circle::setR(int r)
{
    m_r = r;
}

int Circle::getR() const
{
    return m_r;
}