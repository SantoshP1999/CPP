
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Numbers\n";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw "Zero not Allowed\n";
        }
        else
        {
            int c = a / b;
            cout << c << endl;
        }
    }
    catch (const char *e)
    {
        cout << "Exception Occured: " << e << endl;
    }

    return 0;
}