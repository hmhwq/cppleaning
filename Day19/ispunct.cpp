#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s = "!!!hello world!!!";
    string result;
    for (auto x : s)
    {
        if (!ispunct(x))
        {
            result += x;
        }
    }
    cout << result << endl;
    return 0;
}