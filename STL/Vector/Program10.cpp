
//front & last element of vector
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

    //print 1st element of vector
    cout<<v.front()<<endl;

    //print last element
    cout << v.back() << endl;

    

     return 0;
}