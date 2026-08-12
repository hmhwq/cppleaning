#include<iostream>
using namespace std; // namespace std;

int main(){
    int arr[5] = {300,350,200,400,250};
    int max = 0;
    (void)max;  // 后续用于求最大值
    for(int i = 0 ; i < 5;i++){
        cout << arr[i]<< endl;
        
    }
    cin.get();
    return 0;
}