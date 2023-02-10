//10. Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;

int main()
{
    int arr[10], sum=0;
   
    cout<<"Enter Array Elements: "<<endl;
    for(int i=0; i<=10; i++)
    {
        cin>>i;
        sum=sum+i; 
    }
    cout<<"Addition of array elements is: "<<sum;
 
     return 0;
}