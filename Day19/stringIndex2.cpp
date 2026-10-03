// stringIndex2.cpp
// 首个单词字符改大写
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::toupper;

int main()
{
    string s("some string");
    for (decltype(s.size()) index = 0;
         index != s.size() && !isspace(s[index]); ++index)

    {
        s[index] = toupper(s[index]);
    }
    cout << s << endl;
    return 0;
}