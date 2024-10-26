#include<iostream>
#include<string>

using namespace std;

int main()
{

    string name;
    cout << "Enter String" << endl;
    cin >> name;    //Santosh Phatangare
    cout << name << endl;   //Santosh

    //getline()function
    string name2;
    cout << "Enter Second String" << endl;
    getline(cin, name2);
    cout << name2 << endl;

    return 0;
}