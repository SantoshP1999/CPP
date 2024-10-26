//  Dynamic memory allocation of object

#include<iostream>
using namespace std;

class Demo
{
        public:
    string name;
    int age, roll_no;
};

int main()
{
    Demo *obj = new Demo();
    (*obj).name = "Santosh";
    (*obj).age = 25;
    (*obj).roll_no = 121;

    cout << obj->name << endl;
    cout << obj->age << endl;
    cout << obj->roll_no << endl;
    return 0;
}