// searching in vector

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

    //searching
    cout<<binary_search(v.begin(), v.end(), 10);  //3rd parameter is search element

    //find index of search element
    cout << find(v.begin(), v.end(), 10) - v.begin();

    return 0;
}