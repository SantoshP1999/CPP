#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll_no;
};

int main()

{
    Student s1;
    s1.name=("Santosh");
    s1.age = 25;
    s1.roll_no = 101;

    cout <<s1.name << " " << s1.age << " " << s1.roll_no << " " << endl;

    return 0;
}