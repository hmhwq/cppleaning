// stringIndex3.cpp 转16进制
// str[x],[]输入参数为string::size_type类型，给出int整型也会自动转化为该类型
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
#include <cstddef>
using std::size_t;
using std::string;

int main()
{
    const string hexdigits = "0123456789ABCDEF"; // possible hex digits
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces.  Hit ENTER when finished: " << endl;
    string result;
    string::size_type n;
    while (cin >> n)
    {
        if (n < hexdigits.size())
            result += hexdigits[n];
    }
    cout << "Your hex number is: " << result << endl;
    return 0;
}