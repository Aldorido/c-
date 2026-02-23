// Q. Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;
int main(){
    int l, b, area, perimeter;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter breadth : ";
    cin>>b;
    area = l*b; 
    perimeter = 2*(l+b);
    if(area>perimeter){
        cout<<"Area is greater than perimeter";
    }
    else if(area<perimeter){
        cout<<"Perimeter is greater than area";
    }
    else{
        cout<<"Area and perimeter are equal";
    }
}