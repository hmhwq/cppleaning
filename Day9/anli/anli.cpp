#include <iostream>
using namespace std;
/**
 * @brief 冒泡排序函数
 * 
 * @param int arr[],int len  arr[]为数组地址，len为数组长度
 * @return void 
 */
void bubbleSort(int arr[],int len) {
    for (int i = 0; i < len-1; ++i) {
        for (int j = 0; j < len -i -1; ++j) {
            //如果 J > J +1 的值  ， 交换数字
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }
}
/**
 * @brief 打印数组
 * 
 * @param arr,len; 参数说明
 * @return void 返回值说明
 */
void printArray(int arr[],int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << endl;
    }
}
int main() {

    int arr[10] = { 4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,len);


    printArray(arr,len);

    system("pause");
    return 0;
}