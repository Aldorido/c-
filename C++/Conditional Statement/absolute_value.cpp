// Q. Take integer input and print the absolute value of that integer

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(n<0){
        cout<<"Absolute value of "<<n<<" is "<<-n; // If the number is negative, we multiply it by -1 to get its absolute value.
    }
    else{
        cout<<"Absolute value of "<<n<<" is "<<n; // If the number is non-negative, its absolute value is the same as the number itself.
    }
}