//void pointer

#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {"1234"};
    char *ptr = arr;
   // cout << arr << endl;

    // print only address of character array
    cout << (void *)arr << endl;
    cout << (void *)ptr << endl;

    cout << static_cast<void *> (arr) << endl;
    
    return 0;
}