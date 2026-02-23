#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    cout << x << endl; // This will print the initial value of x, which is 5.
    x = 7;
    cout << x << endl; // This will print the updated value of x, which is now 7.
    x = x + 6;
    cout << x << endl; // This will print the new value of x, which is 13 (7 + 6).
    x = x - 20;
    cout << x << endl; // This will print the new value of x, which is -7 (13 - 20).
    return 0;
}