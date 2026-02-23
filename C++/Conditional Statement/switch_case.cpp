// Q. Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case. The calculator should input two numbers and an operator from user.

#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    char op;
    cout<<"Calculate : ";
    // cout<<"Enter first number : ";
    cin>>num1;
    // cout<<"Enter operator (+, -, *, /) : ";
    cin>>op;
    // cout<<"Enter second number : ";
    cin>>num2;
    switch (op)
    {
        case '+':
            cout<<"Result : "<<num1+num2;
            break;
        case '-':
            cout<<"Result : "<<num1-num2;
            break;
        case '*':
            cout<<"Result : "<<num1*num2;
            break;
        case '/':
            if(num2!=0){
                cout<<"Result : "<<num1/num2;
            }
            else{
                cout<<"Error: Division by zero is not allowed.";
            }
            break;    
        default:
            cout<<"Invalid operator";
    }
}