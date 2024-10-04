/*
Ticket Price Calculator: Create a program that asks the user for their age
 and checks if they qualify for a discounted ticket price 
 (e.g., under 12 and over 65 get discounts), If they are eligible 
 print “YES” else “NO”. 

*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter Age: ";
    cin>>age;

    if(age<=12 || age>=65)
    {
        cout<<"Eligible for Discounts\n";
    }
    else
    {
        cout<<"Not eligible for Discounts\n";
    }

    return 0;
}