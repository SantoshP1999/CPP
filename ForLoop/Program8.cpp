//Sum on N natural numbers

#include<iostream>
using namespace std;

int main(){

int n,i,sum=0;
cout<<"Enter Range\n";
cin>>n;

for(i=1;i<=n;i++)
{
    sum=sum+i;
   
}
 cout<<"Sum from 1 to "<<n<<" is: " <<sum<<endl;

    return 0;
}