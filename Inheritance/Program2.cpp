
#include <iostream>
using namespace std;

class Human
{
public:
    string religion, color;

protected:
    string name;
    int age, weight;
};

class Student : public Human
{
protected:
    int roll_no, fees;

public:
    Student(string name, int age, int weight, string religion, string color, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->religion = religion;
        this->color = color;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << weight << " " << religion << " " << color << " " << roll_no << " " << fees << endl;
    }
};

int main()
{
    Student s("Santosh", 25, 64, "Hindu", "white", 121, 1000);

    s.display();
}