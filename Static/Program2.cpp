
// static member function

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_no;
    int balance;

    static int total_customer;
    static int total_balance;

public:
    Customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;

        total_customer++;
        total_balance = total_balance + balance;
    }

    void static accessStatic()
    {
        cout << "Total Customer: " << total_customer << endl;
        cout << "Total Balance: " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            total_balance = total_balance + amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance = balance - amount;
            total_balance = total_balance - amount;
        }
    }

    void display()
    {
        cout << name << " " << acc_no << " " << balance << endl;
    }
};

int Customer::total_customer = 10;
int Customer::total_balance = 10000;

int main()
{
    Customer c1("Santosh", 101, 1000);
    c1.display();

    c1.deposit(100);
    c1.display();

    c1.withdraw(500);
    c1.display();

    // c1.accessStatic();

    // static member function called
    Customer::accessStatic();

    return 0;
}