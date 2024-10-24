
//Iterator in vector

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //print vector using iterator

    for (auto itr = v.begin(); itr != v.end();itr++)
    {
        cout << *itr << " ";
    }

    //print vector using reverse iterator
    for (auto itr = v.rbegin(); itr != v.rend();itr++)
    {
        cout << *itr << " ";
    }
        
    cout << endl;
    return 0;
}