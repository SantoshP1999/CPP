//modify value of n

#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p = &n;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;

    *p = n + 5;
    cout << n<<endl;

    **p2 = **p2 + 5;
    cout << n<<endl;

    ***p3 = ***p3 + 10;
    cout << n << endl;

    ****p4 = ****p4 + 50;
    cout << n<<endl;

    return 0;
}