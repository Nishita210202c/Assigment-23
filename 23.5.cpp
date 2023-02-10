//5. Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;

int main()
{
     
    int l, w, h, volume;

    cout<<"Enter length  width height : ";
    cin>>l>>w>>h;

    volume=l*w*h;

    cout<<"Volume of cuboid is:"<<volume;
}