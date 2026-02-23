// Q. Take 3 numbers input and tell if they can be the sides of a triangle.

#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 1st side : ";
    cin>>a;
    cout<<"Enter 2nd side : ";
    cin>>b;
    cout<<"Enter 3rd side : ";
    cin>>c;
    // we can use and instead && operator as well, both will work fine
    if((a+b)>c && (b+c)>a and (c+a)>b){     // Triangle Inequality Theorem
        cout<<"They can be the sides of a triangle";
    }
    else{
        cout<<"They cannot be the sides of a triangle";
    }
}