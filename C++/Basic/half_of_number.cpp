// Q. Take integer 'x' as input and print half of the number.

#include<iostream>
using namespace std;   
int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x; 
    float y = (float)x;     // This will convert the integer 'x' to a float and store it in the variable 'y'. This is done to ensure that we get a decimal result when we divide by 2, even if 'x' is an odd number.
    cout << "Half of the number is: " << y / 2 << endl;
    return 0;
}