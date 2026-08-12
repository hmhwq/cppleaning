#include <iostream>
#include <string>

using namespace std;

/**
 * @brief 人的类
 */
class Person {
private:
    int m_age = 0; // 建议提供默认初始值
    string m_name;

public:
    /**
     * @brief 默认构造函数
     */
    Person() {
        cout << "Person 构造函数调用" << endl;
    }

    /**
     * @brief 析构函数
     */
    ~Person() {
        cout << "Person 析构函数调用" << endl;
    }

    // 提供对 m_age 的操作，避免 unused-private-field 警告
    void setAge(int age) {
        m_age = age;
    }

    int getAge() {
        return m_age;
    }

    string getName() {
        return m_name;
    }
};

int main() {

    Person p1;

    return 0;
}