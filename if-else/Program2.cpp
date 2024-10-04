
/*
Age of a person is given, print Adult if his/her age is greater than 18, 
otherwise print Teenager.

*/
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter Age\n";
    cin>>age;

    if(age>18)
    {
        cout<<"Adult\n";
    }
    else
    {
        cout<<"Teenager\n";
    }
}