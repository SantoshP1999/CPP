// Array memeory management

#include <iostream>
using namespace std;

int main()

{
    int n;
    cout << "Enter Size\n";
    cin >> n;
    // int arr[n];
    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
        // p[i] = i + 1;
        cin >> p[i];
    }

    cout << "print Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    // use delete
    delete[] p;
}