
// Function overloading

#include <iostream>
using namespace std;

class Area
{
public:
    int calculateArea(int r)
    {
        return 3.14 * r * r;
    }

    int calculateArea(int l, int b)
    {
        return l * b;
    }
};

int main()
{
    Area a1, a2;
    cout << a1.calculateArea(4) << endl;
    cout << a2.calculateArea(4, 3) << endl;

    return 0;
}