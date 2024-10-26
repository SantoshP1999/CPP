//Reverse string

#include<iostream>
using namespace std;

int main()
{
    string name="Santosh";

    cout << "Original String: "<<name<<endl;

    int start = 0;
    int end = name.size() - 1;
    while(start<end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout <<"Reverse String: "<< name<<endl;
    return 0;
}