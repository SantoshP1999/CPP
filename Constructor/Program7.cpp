
// Destructor

#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    int age;

public:
    // Constructor
    Student(string name, int roll_no, int age)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->age = age;

        cout << "Constructor Called\n";
    }

    void display()
    {
        cout << name << " " << roll_no << " " << age << endl;
    }

    ~Student()
    {
        cout << "Destructor Called\n";
    }
};

int main()
{
    Student s1("Santosh", 121, 25);
    s1.display();
}