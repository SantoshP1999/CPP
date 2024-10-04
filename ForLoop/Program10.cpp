// Prime number

#include<iostream>
using namespace std;

int main()
{
    int num,i;

    cout<<"Enter number\n";
    cin>>num;

    if(num<2)
    {
        cout<<"Not Prime\n";
        return 0;
    }
    else
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                cout<<"Not Prime\n";
                return 0;
            }
        }
        cout<<"Prime\n";
    }
    return 0;
}