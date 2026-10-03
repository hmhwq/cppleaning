#include <iostream>
using namespace std;
// 求1到10的和
int main()
{
    int sum = 0, val = 50;

    while (val <= 100)
    {
        /* code */
        sum += val;
        ++val;
    }
    cout <<"The sum of 50 to 100 is "<< sum << endl;
    return 0;
}