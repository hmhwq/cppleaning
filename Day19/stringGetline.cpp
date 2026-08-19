/**
 * @file stringGetline.cpp
 * @author HMHWQ
 * @brief 使用getline读取一整行
 * @version 0.1
 * @date 2026-08-19 22:31
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <string>
using std::getline;
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string line;
    while (getline(cin, line))
        cout << line << endl;
    return 0;
}
