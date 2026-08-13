#include <iostream>
#include <string>
using namespace std;
// 结构体指针

/**
 * @brief 学生的相关信息结构体，包含姓名，年龄，分数等。
 */
struct Student
{
    string name;
    int age; // 年龄
    int score;
};

int main()
{
    // 1、创建学生的结构体变量
    Student s = {"张三", 18, 100};

    // 2、通过指针指向结构体变量
    Student *p1 = &s;

    // 3、通过指针访问结构体变量中的数据
    cout << p1->age << endl;
    p1->age = 20;
    cout << p1->age << endl;

    cin.get();
    return 0;
}