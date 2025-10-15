#include <bits/stdc++.h>
using namespace std;

// compile time polymorphism
// 1 fnx overloading
// 2 operator overloading

// 1 fnx overloading
class math
{
public:
    // fnx overloading .. (name and return type must be same)
    int sum(int a, int b) { return a + b; }
    int sum(int a, double b) { return a; }
    int sum(int a, int b, int c) { return a + b + c; }
};

// 2 operator overloading

class dub
{
public:
    int sum;
    dub(int a) { sum = a; }
    int operator+(dub &obj)
    {
        return this->sum - obj.sum;
    }
};

int main()
{
    dub alone(10);
    dub blone(100);
    cout << alone + blone << endl;

    return 0;
}