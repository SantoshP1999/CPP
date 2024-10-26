// Destructor

#include <iostream>
using namespace std;

class Student
{
    // public:
    string name;
    int *data;

public:
    Student()
    {
        name = "Santosh";
        data = new int;
        *data = 10;
    }

    void display()
    {
        cout << name << " " << *data << endl; // Santosh 10
    }

    ~Student()
    {
        delete data;
        cout << "destructor Called" << endl;  // destructor Called
        cout << name << " " << *data << endl; // Santosh 0
    }
};

int main()
{

    Student s;
    s.display();
}