//copy value of 1 vector to another

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int> v2;
    v2 = v;

    cout <<"Second Vector"<< endl;
    
    //print using simple for loop
    for (int i = 0; i < v2.size();i++)
    {
        cout << v2[i] << " ";
    }

    //print using vector
    cout << "\nPrint Second vector using iterator" << endl;
    for (auto itr = v2.begin(); itr!=v2.end();itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    //
    cout << "Print using for each loop\n";
    for(auto i:v2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;

}