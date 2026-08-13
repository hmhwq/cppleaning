#include <iostream>
using namespace std;

int &fun()
{
    static int a = 10;
    return a;
}

int main()
{
    cout << fun() << endl;
    cout << fun() << endl;
    fun() = 100;
    cout << fun() << endl;
    cout << fun() << endl;
    cin.get();
    return 0;
}