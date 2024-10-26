
// Inheritance

#include <iostream>
using namespace std;

class Human
{
    string religion, color;

protected:
    string name;
    int age, weight;
};

class Student : private Human
{
private:
    int roll_no, fees;

public:
    void fun(string name, int age, int weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    void display()
    {
        cout << name << " " << age << " " << weight << endl;
    }
};

int main()
{
    Student s;
    s.fun("Santosh", 25, 64);
    s.display();
    return 0;
}