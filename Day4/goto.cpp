#include<iostream>
using namespace std; // namespace std;

int main(){


    cout<<"第1行"<<endl;
    cout<<"第2行"<<endl;    
    goto FLAG;

    cout<<"第3行"<<endl;
    cout<<"第4行"<<endl;
    cout<<"第5行"<<endl;
    FLAG:
    cout<<"第6行"<<endl;
    system("pause");
    return 0;
}
