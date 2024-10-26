
// Memory Management

#include <iostream>
using namespace std;

int main()
{

    // Allocate Heap memory for variables
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;

    float *p1 = new float;
    *p1 = 3.14;
    cout << *p1 << endl;

    // delete memory
    delete ptr;
    delete p1;

    return 0;
}