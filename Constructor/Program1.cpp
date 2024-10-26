//Default constructor

#include<iostream>
using namespace std;

class Demo
{
    public:
    int roll_no;
    int age;

    //Default constructor
    Demo()
    {
        cout << "Default Constructor\n";
    }
};

int main()

{
    Demo d;
    
    return 0;
}