
// Access Private memberes in class using function

#include <iostream>
using namespace std;

class Student
{

    string name;
    int age, roll_no;

    // Setter method
public:
    void setName(string name)
    {
        name = name;
    }

    void setAge(int age)
    {
        age = age;
    }

    void setRollNo(int roll_no)
    {
        roll_no = roll_no;
    }

    // Getter method

    void getName()
    {
        cout << name << endl;
    }

    void getAge()
    {
        cout << age << endl;
    }

    void getRollNo()
    {
        cout << roll_no << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Santosh");
    s1.setAge(25);
    s1.setRollNo(121);

    s1.getName();
    s1.getAge();
    s1.getRollNo();

    // Student s2;

    // s2.setName("Santosh");
    // s2.setAge(25);
    // s2.setRollNo(121);

    // s2.getName();
    // s2.getAge();
    // s2.getRollNo();

    return 0;
}