#include<iostream>
using namespace std; // namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<< sizeof(arr) << endl;
    cout<<"每个元素占用的内存空间为："<<sizeof(arr[0])<<endl;
    cout<<"数组中元素的个数为："<< sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"数组的首地址为：" << (long long)arr << endl;


    //数组名是常量，不可以赋值
    

    system("pause");
    return 0;
}