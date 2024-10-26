
#include <iostream>
using namespace std;

class Student
{

    string name;
    int roll_no;
    int age;
    static int assignment;

public:
    Student(string name, int roll_no, int age)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->age = age;

        assignment;
    }

    void display()
    {
        cout << name << " " << roll_no << " " << age << " " << assignment << endl;
        // cout << name << " " << roll_no << " " << age << endl;
    }

    void displayAssignment()
    {
        cout << assignment << endl;
    }
};

// initialize static variables
int Student::assignment = 10;

int main()
{
    Student s1("Santosh", 121, 25);
    s1.display();
    s1.displayAssignment();

    return 0;
}