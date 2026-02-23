// Q. If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit of "<<sp-cp; 

    }
    else if(sp<cp){
        cout<<"Loss of "<<cp-sp;
    }
    else{
        cout<<"No profit no loss";
    }
}