#include <iostream>
#include <vector>

using namespace std;

int secondLargestElement(vector<int> &ar)
{
    int len = ar.size();
    if (len == 1)
        return -1;

    int maxi = INT32_MIN;

    // O(n)
    for (int i = 0; i < len; i++)
    {
        if (maxi < ar[i])
            maxi = ar[i];
    }

    // O(n)
    int sec_maxi = INT32_MIN;
    for (int i = 0; i < len; i++)
    {
        if (maxi == ar[i])
            continue;
        else if (sec_maxi < ar[i])
            sec_maxi = ar[i];
    }

    return sec_maxi == INT32_MIN ? -1 : sec_maxi;
}

/*
Time : O(N)
Space : O(1)T
*/

int main()
{

    return 0;
}