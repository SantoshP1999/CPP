//print the multiplication table of given number

#include<iostream>
using namespace std;

int main(){

    int num;

cout<<"Enter the Number"<<endl;
cin>>num;

for(int i=1;i<=10;i++){
    cout<<i*num<<endl;
}
    return 0;
}