// 编写一段程序，用cin读入一组整数并把它们存入一个vector对象。
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
vector<int> v1;
vector<int> v2(v1);
// vector<int> v2 = v1;
vector<int> v3(10,11);
for(auto val : v3)
cout << val << endl;
    return 0;
}