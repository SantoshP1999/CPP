#include<iostream>
using namespace std;
int main()
{
int num1=0,num2=1,num3=0,n;
cout<<"Enter Number\n";
cin>>n;
cout<<num1<<" "<<num2<<" ";
for(int i=1;i<n;i++)
{
num3=num1+num2;
cout<<num3<<" ";
num1=num2;
num2=num3;
}
cout<<endl;
}