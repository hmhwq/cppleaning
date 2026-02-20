#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 10;
    
    int* const p1 = &a;
    // p1 = &b;


    const int * p2 = &a;
    p2 = &b;

    const int* const p3 = &a;
    

    system("pause");
    return 0;
}