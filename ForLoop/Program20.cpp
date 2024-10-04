
/*

    a b c d e
    a b c d e
    a b c d e
    a b c d e
    a b c d e
    

*/

#include<iostream>
using namespace std;
int main()
{


for (int i=1;i<=5;i++)
{
   // char ch='a';
    for(int j=1;j<=5;j++)
    {
        char ch='a'+j-1;
        cout<<ch<<" ";
        ch++;
    }
    
    cout<<endl;
}
    return 0;

}