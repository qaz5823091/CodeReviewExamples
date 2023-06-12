#include<iostream>
using namespace std;

int main(){
    int num1=0,num2 = 0, num3 = 0; //initailize variables
    cout<<"please input 3 number" << endl;
    cin >> num1 >> num2>>num3;

    if(num1>num2)
    {
        if( num1 > num3 ){
            cout<<"The biggest number is " << num1; // num1 > num2&num3
        }
        else{
            cout<<"The biggest number is " << num3; // num3 >= num1 > num2
        }
    }

    else
    {
        if( num2 > num3 ){
            cout<<"The biggest number is " << num2; // num2 >= num1 & num3
        }
        else{
            cout<<"The biggest number is " << num3; // num3 >= num2 >= num1
        }
    }

    return 0;
}
