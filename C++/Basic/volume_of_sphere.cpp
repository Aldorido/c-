#include<iostream>
using namespace std;
int main() {
    float r, volume;
    cout<<"Enter radius of the sphere: ";
    cin>>r; // This will take the input for the radius of the sphere from the user and store it in the variable 'r'.
    volume = (4.0/3.0) * 3.14 * r * r * r; // This will calculate the volume of the sphere using the formula volume = (4/3)πr³, where π is approximated as 3.14.
    cout<<"The volume of the sphere is: "<<volume<<endl; 
    return 0; 
}