#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string m_Name;
    int m_ID;

    void setName(string name)
    {
        m_Name = name;
    }
    void setID(int ID)
    {
        m_ID = ID;
    }
};

int main()
{

    cin.get();
    return 0;
}