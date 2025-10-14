#include <bits/stdc++.h>
using namespace std;

class mobile
{
public:
    void keypad()
    {
        cout << "I have keypad" << endl;
    }
};

class laptop
{
public:
    void internet()
    {
        cout << "Can access the internet" << endl;
    }
};

class smartPhone : public mobile, public laptop
{
};

// diamond problem
class line_a
{
public:
    int physics;
    int chemistry;
    void print()
    {
        cout << "line a" << endl;
    }
};

class line_b
{
public:
    int chemistry;
    void print()
    {
        cout << "line b" << endl;
    }
};

class line_c : public line_a, public line_b
{
public:
};

int main()
{
    // smartPhone vivo;
    // vivo.internet();
    // vivo.keypad();

    line_c obj;
    cout << obj.line_a::chemistry << endl;
    obj.line_a::print();
    obj.line_b::print();

    return 0;
}