
//front,back,at,empty

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

    for (int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

   

    //front
    cout << v.front()<<endl;

     //back
    cout << v.back()<<endl;

    //at    position
    cout << v.at(2)<<endl;

    //empty     return 1 or 0
    cout << v.empty()<<endl;

    return 0;
}