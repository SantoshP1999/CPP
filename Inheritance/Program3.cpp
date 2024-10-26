
// Single inheritance

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
        cout << "I am Human\n";
    }

    void work()
    {
        cout << "I am Working\n";
    }
};

class Student : public Human
{
    int roll_no, fees;

public:
    Student(string name, int age, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_no << " " << fees << endl;
    }

    ~Student()
    {
    }
};

int main()
{
    Student s("Santosh", 25, 121, 1000);
    s.work();
    s.display();
}
