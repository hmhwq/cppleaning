#include<iostream>
using namespace std; // namespace std;
int main()
{

    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    cout<< sizeof(arr) << endl;
    cout<< sizeof(arr[0])<<endl;
    cout << (long long)arr<<endl;
    cout << (long long)arr[0]<<endl;    
    cout << (long long)arr[1]<<endl;    
    system("pause");
    return 0;
}