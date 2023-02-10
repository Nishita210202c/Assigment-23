//6. Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;

int main()
{
    float a, b, c;
    float avg;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    avg = (a+b+c) / 3;
    
    cout<<"Avg is: "<<avg<<endl;

    return 0;
}