/**
 * @file biSearch.cpp
 * @author HMHWQ
 * @brief 二分搜索
 * @version 0.1
 * @date 2026-10-03 10:13
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string text = "abcdefghi";
    cout << text << endl;
    auto beg = text.begin(), end = text.end();
    auto mid = beg + (end - beg) / 2;
    char sought = 'c';
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
    if (mid != end && *mid == sought)
    {
        cout << "found:" << *mid << "@" << mid - text.begin() << endl;
    }

    return 0;
}