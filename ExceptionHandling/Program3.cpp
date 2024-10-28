
// Exception Class

#include <iostream>
using namespace std;

int main()
{

    try
    {
        int *p = new int[1000000000];
        cout << "Memory Allocation is Successfully\n";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exception Occured: " << e.what() << endl;
    }

    return 0;
}