// Inline & copy constructor

#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    int age;

    // Parameterized constructor
public:
    Student(string name, int roll_no, int age)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->age = age;
    }

    // // inline constructor
    // inline Student(string name, int roll_no, int age) : name(name), roll_no(roll_no), age(age) {}

    // copy constructor
    Student(Student &a)
    {
        name = a.name;
        roll_no = a.roll_no;
        age = a.age;
    }

    void display()
    {
        cout << name << " " << roll_no << " " << age << endl;
    }
};

int main()
{

    Student s1("Santosh", 121, 25); // Parameterized Constructor
    // Student s2("Santosh", 121, 25); // inline Constructor
    Student s3(s1);
    s1.display();
    s3.display();
}