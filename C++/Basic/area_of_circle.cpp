#include<iostream>
using namespace std;
int main() {
    float r, area;
    cout << "Enter the radius of the circle: ";
    cin >> r; // This will take the input for the radius of the circle from the user and store it in the variable 'r'.
    area = 3.14 * r * r; // This will calculate the area of the circle using the formula area = πr², where π is approximated as 3.14.
    cout << "The area of the circle is: " << area << endl; // This will print the calculated area of the circle to the console.
    return 0; // This indicates that the program ended successfully.
}