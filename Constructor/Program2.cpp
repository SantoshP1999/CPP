
//  Parameterized costructor

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
    int age;

    // Parameterized Constructor
    Student(string a, int b, int c)
    {
        name = a;
        roll_no = b;
        age = c;
    }
};

int main()
{

    Student s("Santosh", 121, 25);

    cout << s.name << " " << s.roll_no << " " << s.age << " \n";

    return 0;
}