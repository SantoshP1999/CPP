
// Multiple constructor & only one destructor

#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    Student(string name)
    {
        this->name = name;

        cout << "Constructor is " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor is " << name << endl;
    }
};

int main()
{
    Student s1("1");
    Student s2("2");
    Student s3("3");
    Student s4("4");
    return 0;
}