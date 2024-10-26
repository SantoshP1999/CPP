
// Arithmatic operations

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // for (int i = 0; i < 5;i++){
    //     cout << *ptr <<" ";
    //     ptr++;
    // }
    // cout << endl;

    // Addition
    ptr = ptr + 3;
    cout << ptr << endl;

    ptr = ptr - 2;
    cout << *ptr << endl;

    return 0;
}