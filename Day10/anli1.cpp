#include <iostream>
using namespace std;
#include<string>


/**
 * @brief 学生的结构体
 */
struct Student {
    string  sName; // 参数说明
    int score;
};
/**
 * @brief 老师的结构体
 */
struct Teacher {
    string name; // 姓名
    //学生数组
    struct Student aArray[5];
    
};
int main() {

    //创建三名老师的数组
    struct Teacher tArray[3];
    
    //通过函数给三名老师的信息赋值，并给老师带的学生信息赋值

    //打印所有老师及所带的学生信息
    

    system("pause");
    return 0;
}