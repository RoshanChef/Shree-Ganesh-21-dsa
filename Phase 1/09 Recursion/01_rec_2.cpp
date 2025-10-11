#include <bits/stdc++.h>
using namespace std;

// factorail of n
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}

// sum of n
int sum_n(int n)
{
    if (n == 1)
        return n;

    return n + sum_n(n - 1);
}

// power of 2 n
int power_2(int n)
{
    if (n == 0)
        return 1;

    return 2 * power_2(n - 1);
}

// sum of square till n
int sum_squre(int n)
{
    if (n == 1)
        return n;

    return n * n + sum_squre(n - 1);
}

int main()
{

    cout << power_2(0) << endl;
    cout << sum_squre(4) << endl;

    return 0;
}