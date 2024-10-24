

//remove value from vector

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    //Insert Element
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //Remove Element
   

    v.pop_back();

     for (int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    

    //delete value of particular index

    v.erase(v.begin() + 2);     //Syntax--> v.erase(v.begin() + index);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }


    //Clear()       ...>Delete all value of vector
    v.clear();
    cout << "Clear() \n";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}