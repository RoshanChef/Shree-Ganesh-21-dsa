#include <bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int age, balance;
    static int total_amount;

public:
    customer(string name, int age, int balance)
    {
        this->name = name;
        this->age = age;
        this->balance = balance;
        total_amount += balance;
    }

    void deposite(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_amount += amount;
        }
    }

    void widrawal(int amount)
    {
        if (balance - amount >= 0)
        {
            balance -= amount;
            total_amount -= amount;
        }
        else
            cout << "Balance is not sufficient" << endl;
    }

    void display()
    {
        cout << "Name " << this->name << endl;
        cout << "Age " << this->age << endl;
        cout << "Balance " << this->balance << endl;
        cout << "Total amount " << this->total_amount << endl;
    }
};

int customer::total_amount = 0;

int main()
{

    customer rohan("Rohan", 12, 1000);
    rohan.deposite(1000);
    rohan.deposite(1000);
    rohan.display();

    // widrawal
    rohan.widrawal(1000);
    rohan.widrawal(1000);
    rohan.widrawal(1000);
    rohan.widrawal(1000);
    rohan.display();

    return 0;
}