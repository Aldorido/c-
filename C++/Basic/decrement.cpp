#include<iostream>
using namespace std;
int main() {
    int x = 4;
    cout<<x<<endl; // This will print the initial value of x, which is 4.
    cout<<x--<<endl; // This will print the current value of x (4) and then decrement x by 1. After this line, x will become 3.
    cout<<x<<endl; // This will print the new value of x, which is 3.

    cout<<endl;
    
    int y = 4;
    cout<<y<<endl; // This will print the initial value of y, which is 4.
    cout<<--y<<endl; // This will first decrement y by 1 (making it 3) and then print the new value of y, which is 3.
    cout<<y<<endl; // This will print the current value of y, which is 3.
    return 0;
}