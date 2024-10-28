
// Multiple Inheritance

#include <iostream>
using namespace std;

class Engineer
{
public:
    string specialization;

    void work()
    {
        cout << "I have Specialized in " << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscriber;

    void contentCreator()
    {
        cout << "I have subscriber base of a " << subscriber << endl;
    }
};

class CodeTeacher : public Youtuber, public Engineer
{
public:
    string name;

    CodeTeacher(string name, string specialization, int subsciber)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subsciber;
    }

    void introduce()
    {
        cout << "My name is " << name << endl;
        work();
        contentCreator();
    }
};

int main()
{
    CodeTeacher c("Santosh", "MCA", 10000);
    c.introduce();
    return 0;
}