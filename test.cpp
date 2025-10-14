#include <bits/stdc++.h>
using namespace std;

class a
{
public:
    void print()
    {
        cout << "print a" << endl;
    }
};

class b : public a
{
public:
    // overide
    void print() { cout << "print b" << endl; }

    // overload
    int sum(int a, int b) { return a + b; }
    float sum(int a) { return a; }
    // int sum(int a, int b, int c) { return a + b + c; }
};

int main()
{

    b obj;
    obj.print();

    cout << obj.sum(10, 20) << endl;
    cout << obj.sum(10) << endl;

    return 0;
}