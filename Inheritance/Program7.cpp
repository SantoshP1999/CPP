
// Hierarchical Inheritance

#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
        cout << "Default\n";
    }
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};

class Student : public Human
{
protected:
    int roll_no;
    int fees;

public:
    Student(string name, int age, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_no << " " << fees << endl;
    }
};

class Teacher : public Human
{
protected:
    int salary;

public:
    Teacher(string name, int age, int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void display()
    {
        cout << name << " " << age << " " << salary << endl;
    }
};

int main()
{
    Student s("Santosh", 25, 121, 1000);
    s.display();

    Teacher t("Shashi sir", 31, 100000);
    t.display();
}