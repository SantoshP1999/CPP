
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    // print address of first element
    cout << arr << endl;

    // print address of 2nd element
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;
    

    // print all addressess
    for (int i = 0; i < 5; i++)
    {
        cout << &arr[i] << endl;
    }

    // print value
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr+0) << endl;
    cout << *ptr << endl;

    // print all values
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

//