#include <iostream>
#include <string>
using namespace std;
/**
 * @brief 学生基本信息
 */
struct Student
{
    string name; // 姓名
    int age;     // 年龄
    int score;   // 分数
};

void printStudent1(Student s);
void printStudent2(Student *s);
void printStudent1(Student s)
{
    cout << s.name << s.age << s.score << endl;
};
void printStudent2(Student *s)
{
    cout << s->name << s->age << s->score << endl;
};

int main()
{
    Student s = {"张三", 28, 100};
    printStudent1(s);
    printStudent2(&s);

    cin.get();
    return 0;
}