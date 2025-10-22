#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void sieve_erosthis(vector<int> &ar)
{

    int n = ar.size();

    // brute force
    // for (int i = 2; i <= n; i++)
    // {
    //     if (ar[i]==1)
    //     {
    //         for (int j = 2*i; j <= n; j += i)
    //         {
    //             ar[j] = 0;
    //         }
    //     }
    // }

    // improved version
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (ar[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                ar[j] = 0;
            }
        }
    }
}

void prime_1_n(int n)
{
    vector<int> ar(n + 1, 1);

    // O( n log(log n) )
    sieve_erosthis(ar);
    for (int i = 1; i <= n; i++)
    {
        if (ar[i])
            cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the numer : " << endl;

    cin >> n;
    prime_1_n(n);
}
