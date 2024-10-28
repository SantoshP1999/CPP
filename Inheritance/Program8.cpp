

// Hybrid Inheritance

#include <iostream>
using namespace std;

class Student
{
public:
    void print()
    {
        cout << "I am Student\n";
    }
};

class Male
{
public:
    void printMale()
    {
        cout << "I am a Male\n";
    }
};

class Female
{
public:
    void printFemale()
    {
        cout << "I am a Female\n";
    }
};

class Boy : public Male, public Student
{
public:
    void printBoy()
    {
        cout << "I am a Boy\n";
    }
};

class Girl : public Female, public Student
{
public:
    void printGirl()
    {
        cout << "I am a Girl\n";
    }
};

int main()
{
    Girl g;
    g.print();

    Boy b;
    b.printBoy();
    return 0;
}