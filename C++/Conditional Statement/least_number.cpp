// Q. Take 3 positive integers input and print the least of them using nested if else.

#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a<b){
        if(a<c){    
            cout<<"Least number is : "<<a;
        }
        else{   // c<a, a<b -> c<a<b
            cout<<"Least number is : "<<c;
        }
    }
    else{   // b<a
        if(b<c){    
            cout<<"Least number is : "<<b;
        }
        else{   // c<b, b<a -> c<b<a
            cout<<"Least number is : "<<c;
        }
    }
}