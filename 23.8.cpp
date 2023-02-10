//8. Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;

int main()
{
    int x, y;
 
    cout<<"enter values of x and y: "<<endl;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"After Swapping"<<endl;
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y;
}