#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(4,2);
    cout << "Size of Vector is : " << v.size()<<endl;
    cout << "Capacity of Vector is : " << v.capacity() << endl;

    return 0;
}