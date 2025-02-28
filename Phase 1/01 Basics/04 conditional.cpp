#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    // check for positive
    if (num > 0)
        cout << "Number is Positive" << endl;
    else
        cout << "km chho " << endl;

    // check for positive - negative - zero
    int value;
    cin >> value;

    if (value > 0)
        cout << "Number is Positive" << endl;
    else if (value < 0)
        cout << "Number is Negative" << endl;
    else
        cout << "Number is zero" << endl;

    // diffrent way
    // if (value > 0)
    //     cout
    //         << "Number is Positive" << endl;
    // else
    // {
    //     if (value < 0)
    //         cout << "Number is Negative" << endl;
    //     else
    //         cout << "Number is zero" << endl;
    // }

    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << "lower case" << endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Upper case" << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "Numberic value" << endl;
    else
        cout << "Give me better Input" << endl;

    return 0;
}