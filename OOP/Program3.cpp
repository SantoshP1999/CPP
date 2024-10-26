
// size of object
#include <iostream>
using namespace std;

class Student
{
    int age;
    int roll_no;
};

int main()
{
    Student s;
    //cout << sizeof(int) << endl;
    cout << sizeof(s) << endl;

    return 0;
}