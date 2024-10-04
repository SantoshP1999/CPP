
//print maximum number from given two numbers

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;


cout<<"Enter First Number: ";
cin>>num1;

cout<<"Enter Second Number: ";
cin>>num2;

if(num1<num2)
{
    cout<<num2 <<" is Maximum "<<endl;
}
else {
    cout<<num1 <<" is Maximum "<<endl;
}
    return 0;
}