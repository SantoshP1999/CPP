/*  
Take a number in input (ex n) and print the corresponding month to it. 
Ex: for n=1, print january, n=2, print feburary like this you need to give 
output. It is given that n will be greater than 0 and less than 13

*/

#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if(num<=0 || num>12)
    {
        cout<<"Please Enter number in between 1 to 12\n";
    }
    else if(num==1)
    {
        cout<<"January\n";
    }
    else if(num==2)
    {
        cout<<"February\n";
    }
    else if(num==3)
    {
        cout<<"March\n";
    }

    else if(num==4)
    {
        cout<<"April\n";
    }
    else if(num==5)
    {
        cout<<"May\n";
    }
    else if(num==6)
    {
        cout<<"June\n";
    }
     else if(num==7)
    {
        cout<<"July\n";
    }

    else if(num==8)
    {
        cout<<"August\n";
    }
    else if(num==9)
    {
        cout<<"September\n";
    }
    else if(num==10)
    {
        cout<<"October\n";
    }

    else if(num==11)
    {
        cout<<"November\n";
    }
    else if(num==12)
    {
        cout<<"December\n";
    }
   
    return 0;
}