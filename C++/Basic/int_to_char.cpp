#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    char ch = (char)x; // This will convert the integer 'x' to its corresponding character using ASCII values and store it in the variable 'ch'.
    cout << "The character corresponding to the integer " << x << " is: " << ch << endl; // This will print the character that corresponds to the integer entered by the user.
    return 0;
}