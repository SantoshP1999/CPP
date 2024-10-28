
// Multipath Inheritance

#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    void display()
    {
        cout << "My name is " << name << endl;
    }
};
class Engineer : public virtual Human
{
public:
    string specialization;

    void work()
    {
        cout << "I have Specialized in " << specialization << endl;
    }
};
class Youtuber : public virtual Human
{
public:
    int subscriber;

    void contentCreators()
    {
        cout << "I have a subscribers base of " << subscriber << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    int salary;

    CodeTeacher(string name, string specialization, int subscriber, int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
        this->salary = salary;
    }

    void monthly_salary()
    {
        cout << "My Monthly Salary is " << salary << endl;
    }
};

int main()
{
    CodeTeacher ct("Santosh", "MCA", 1000, 500000);
    ct.display();
    ct.work();
    ct.contentCreators();
    ct.monthly_salary();

    return 0;
}