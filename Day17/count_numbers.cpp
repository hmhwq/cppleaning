#include <iostream>
using namespace std;
// 统计输入中每个值连续出现的次数
int main()
{

    int currval = 0, val = 0;
    if (cin >> currval)
    {
        int cnt = 1;
        while (cin >> val)
        {
            if (val == currval)
                ++cnt;

            else

            {
                cout << currval << " occurs" << cnt << " times " << endl;

                currval = val;

                cnt = 1;
            }
        }
        cout << currval << " occurs" << cnt << " times " << endl;
    }

    return 0;
}