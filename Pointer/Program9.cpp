
// passing vectors

#include <iostream>
#include <vector>
using namespace std;

void passVector(vector<int> &temp)
{
    for (int i = 0; i < 5; i++)
    {
        temp[i] = 20;
    }
}

int main()
{
    vector<int> v(5, 0);

    passVector(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}