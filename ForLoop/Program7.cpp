// Calculate the power of given number

#include<iostream>
using namespace std;

int main(){

int num,pow,i,n;

cout<<"Enter Number\n";
cin>>n;

cout<<"Enter power number\n";
cin>>pow;
num=n;
for(int i=1;i<pow;i++){
    num=num*n;
    cout<<num<<endl;
}

    return 0;
}