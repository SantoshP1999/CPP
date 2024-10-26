
//  this Pointer

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
    int age;

    // constructor & this pointer
    Student(string name, int roll_no, int age)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->age = age;
    }
};

int main()
{
    Student s("Santosh", 121, 25);

    cout << s.name << " " << s.roll_no << " " << s.age << endl;

    return 0;
}