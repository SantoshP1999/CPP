
// sorting in vector

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(10);
    v.push_back(50);


    //sort in increasing order
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size();i++)
    {
        cout << v[i]<<" ";
    }

    //sort in decreasing order
    sort(v.begin(), v.end(),greater<int>());
    for (int i = 0; i < v.size();i++)
    {
        cout << v[i]<<" ";
    }

    sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size();i++)
    {
        cout << v[i]<<" ";
    }
    

    return 0;
}