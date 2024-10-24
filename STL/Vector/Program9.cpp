// Vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // Create/declare vector
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

     for (int i = 0; i < v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // size & capacity
    cout << "Size of vector :" << v1.size() << endl;    //5

    cout << "Capacity of vector :" << v1.capacity() << endl;        //8

    // update value
    v1[1] = 100;
    for (int i = 0; i < v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // delete value from vector
    vector<int> v2;

    v2.push_back(11);
    v2.push_back(22);
    v2.push_back(33);
    v2.push_back(44);
    v2.push_back(55);

    v2.pop_back();  //delete last element

    v2.erase(v2.begin()+3); //delete element at particular index

    for (int i = 0; i < v2.size();i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    

    // insert element at index
    v2.insert(v2.begin() + 2, 50);
    for (int i = 0; i < v2.size();i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // replace value of index
    v2[1] = 101;
     for (int i = 0; i < v2.size();i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // remove all elements of vector
    v2.clear();

    return 0;
}
