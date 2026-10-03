// stingFor2.cpp
// 统计标点符号 
#include <iostream>
#include <cctype>
#include <string>
using std::cout;
using std::endl;
using std::ispunct;
using std::string;

int main()
{
    string s("Hello world!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c :s)
    {
        if (ispunct(c))
        ++punct_cnt;
    }
    cout << punct_cnt
    <<" punctuation characters in "<< s  << endl;
    return 0;
}
