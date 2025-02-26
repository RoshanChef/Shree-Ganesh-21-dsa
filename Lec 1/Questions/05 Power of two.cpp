#include <iostream>

using namespace std;

bool power_2(int num)
{
    if (num <= 0)
        return false;
    int power = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (power == num)
            return true;
        power *= 2;
    }

    return false;
}

bool power_two(int num)
{
    if (num <= 0)
        return false;

    return !(num & num - 1);
}

int main()
{

    int input = 15;
    if (power_2(INT32_MIN))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    int val = INT32_MAX;
    cout << "value " << val << endl;
    val = (1 << 31);
    cout << "value " << val << endl;

    return 0;
}