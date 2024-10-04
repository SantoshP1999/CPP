//Factorial of given number

#include<iostream>
using namespace std;

int main()
{

int fact=1,i,n;
cout<<"Enter Number\n";
cin>>n;

for(i=1;i<=n;i++)
{
    fact=fact*i;

}
cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}