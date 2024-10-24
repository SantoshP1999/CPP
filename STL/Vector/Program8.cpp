
//sorting

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {30, 10, 20, 60, 50};

    for (int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout <<"\nAfter Sort"<< endl;

    //Increasing order

    sort(v.begin(), v.end());

    //Decreasing order
    sort(v.begin(), v.end(),greater<int>());
}