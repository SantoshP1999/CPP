// double pointer

#include <iostream>

using namespace std;

int main()
{

    int n = 10;
    int *p = &n;

    int **ptr = &p;

    int ***nptr = &ptr;

    // cout << n << endl;
    // cout << &n << endl;

    // cout << *p << endl;
    // cout << &p << endl;

    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr<<endl;
    // cout << **ptr << endl;

    cout << ***nptr << endl;
    cout << &nptr << endl;

    return 0;
}