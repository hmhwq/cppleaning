#include <iostream>
#include <string>
using namespace std;

/**
 * @brief 英雄相关信息
 */
struct Hero
{
    string name; // 姓名
    int age;     // 年龄
    string sex;  // 性别
};
void bubbleSort(Hero heroArray[], int len);
void bubbleSort(Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; ++i)
    {
        for (int j = 0; j < len - 1 - i; ++j)
        {
            if (heroArray[j].age > heroArray[j + 1].age)
            {
                Hero temp = heroArray[j + 1];
                heroArray[j + 1] = heroArray[j];
                heroArray[j] = temp;
            }
        }
    }
}
void printHero(Hero heroArray[], int len);
void printHero(Hero heroArray[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << heroArray[i].name << heroArray[i].age << heroArray[i].sex << endl;
    }
}

int main()
{
    Hero heroArray[] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"}};
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    // for (int i = 0; i < len; ++i)
    // {
    //     cout << heroArray[i].name
    //          << heroArray[i].age
    //          << heroArray[i].sex << endl;
    // }
    printHero(heroArray, len);
    cout << endl;
    bubbleSort(heroArray, len);
    printHero(heroArray, len);
    cin.get();
    return 0;
}