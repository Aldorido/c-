// Q. Take positive integer input and tell if it is divisible by 5 or 3.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer : ";
    cin>>num;
    // we can use or instead || operator as well, both will work fine
    if(num%5==0 || num%3==0){
        cout<<"It is divisible by 5 or 3";
    }
    else{
        cout<<"It is not divisible by 5 or 3";
    }
}