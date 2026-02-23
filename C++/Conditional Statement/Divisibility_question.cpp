// Q. Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer : ";
    cin>>num;
    if((num%5==0 || num%3==0) && num%15!=0){
        cout<<"It is divisible by 5 or 3 but not divisible by 15";
    }
    else{
        cout<<"It is divisible by 5 or 3 and also divisible by 15";
    }
}