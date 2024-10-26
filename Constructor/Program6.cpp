
// Copy constructor

#include <iostream>
using namespace std;

class Student
{

    string name;
    int roll_no;
    int age;

public:
    // parameterized Constructor
    Student(string a, int b, int c)
    {
        name = a;
        roll_no = b;
        age = c;
    }

    // copy constructor
    Student(Student &x)
    {
        name = x.name;
        roll_no = x.roll_no;
        age = x.age;

        cout << "Copy Constructor\n";
    }

    void display()
    {
        cout << name << " " << roll_no << " " << age << endl;
    }
};

int main()
{
    Student s1("Santosh", 121, 25);
    s1.display();

    Student s3(s1);

    s3.display();

    return 0;
}