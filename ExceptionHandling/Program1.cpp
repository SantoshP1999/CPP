
// Exception Handling in CPP

#include <iostream>
using namespace std;
class Customer
{
    string name;
    int acc_no, balance;

public:
    Customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << amount << " Rs Credited Successfully\n";
        }
        else
        {
            throw "Amount is Invalid\n";
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << amount << " Rs Debited\n";
        }
        else
        {
            throw "Invalid Amount\n";
        }
    }

    void display()
    {
        cout << name << " " << acc_no << " " << balance << endl;
    }
};

using namespace std;

int main()
{
    Customer c1("Santosh", 121, 1000);
    try
    {
        c1.deposit(500);
        // c1.deposit(0);
        c1.withdraw(100);
        c1.display();
    }
    catch (const char *e)
    {
        cout << "Exception Occurred: " << e << endl;
    }

    return 0;
}