#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "The ASCII value of the character '" << ch << "' is: " << (int)ch << endl; // This will print the ASCII value of the character entered by the user. The (int) before 'ch' is a type cast that converts the character to its corresponding integer ASCII value.
    return 0;
}