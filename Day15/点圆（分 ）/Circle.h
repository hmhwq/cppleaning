#pragma once
#include "Point.h" // 因为 Circle 内部用到了 Point 对象作为成员变量，所以需要 Point 的完整定义

class Circle
{
public:
    void setCenter(Point center);
    Point getCenter() const;

    void setR(int r);
    int getR() const;

private:
    int m_r;
    Point m_Center; // 包含 Point 类型的对象
};