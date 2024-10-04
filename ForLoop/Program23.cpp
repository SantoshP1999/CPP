/*
Print all Odd numbers from 1 to n, take n as an input from the user
*/

#include<iostream>
using namespace std;

int main()
{
    int num,odd;
    cout<<"Enter Number: ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
       
    }
    return 0;
}