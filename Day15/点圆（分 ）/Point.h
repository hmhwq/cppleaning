#pragma once // 防止头文件被重复包含

// 前向声明 Circle 类（只用到 Circle 的引用，不需要知道其内部细节）
class Circle;

class Point
{
public:
    void setX(int x);
    int getX() const;

    void setY(int y);
    int getY() const;

    // 声明成员函数
    bool isInCircle(const Circle &c1) const;

private:
    int m_x;
    int m_y;
};