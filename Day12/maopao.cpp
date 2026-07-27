#include <iostream>
using namespace std;
void bubbleSort(int arr[], int len);

void bubbleSort(int arr[], int len){
    for (int i = 0; i < len - 1 ; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }           
        }
    }
}

int main() {
    int arr1[] = {4,3,5,2,1,9,7,8};
    int len = sizeof(arr1)/sizeof(arr1[0]);
    bubbleSort(arr1,len);
    for (int i = 0; i < len; ++i) {
        cout << arr1[i] << endl;
    }

    cin.get();
    return 0;
}