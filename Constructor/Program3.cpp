
// Constructor Overloading

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
    int age;

    // Constructor 1
    Student(string a, int b, int c)
    {
        name = a;
        roll_no = b;
        age = c;
    }

    // Constructor 2
    Student(string a, int b)
    {
        a = name;
        b = roll_no;
    }
};

int main()
{

    Student s1("Santosh", 121, 25);
    Student s2("Santosh", 121);

    cout << "Constructor 1: " << s1.name << " " << s1.roll_no << " " << s1.age << endl;
    cout << "Constructor 2: " << s1.name << " " << s1.roll_no << endl;

    return 0;
}