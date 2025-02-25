#include <iostream>
using namespace std;

int sqroot(int number)
{
    for (int i = 2; i * i <= number; i++)
        if (i * i == number)
            return i;

    return -1;
}

int main()
{

    int ans = sqroot(15);
    cout << ans << endl;

    return 0;
}