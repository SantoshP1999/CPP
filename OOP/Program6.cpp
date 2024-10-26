// Encapsulation

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_no, age, balance;

public:
    Customer(string name, int acc_no, int age, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->age = age;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
        }
        else
        {
            cout << "Invalid Amount\n";
        }
        cout << amount << " rs is credited Successfully\n";
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Invalid Amount\n";
        }
        cout << amount << " rs is debited Successfully\n";
    }

    void updateAge(int age)
    {
        if (age < 100 && age > 0)
        {
            this->age = age;
        }
        else
        {
            cout << "Invalid Age\n";
        }
    }

    void display()
    {
        cout << name << " " << acc_no << " " << age << " " << balance << endl;
    }
};

int main()
{
    Customer c1("Santosh", 121, 25, 1000);

    c1.display();

    c1.deposit(500);

    c1.withdraw(300);

    c1.display();

    c1.updateAge(30);
    c1.display();

    return 0;
}