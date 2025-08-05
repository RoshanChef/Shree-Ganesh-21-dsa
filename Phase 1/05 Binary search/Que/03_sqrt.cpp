#include <iostream>
using namespace std;

int mySqrt(int x)
{
    if (x < 2)
        return x;

    int start = 1, end = x;
    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int div = x / mid;
        if (mid == div)
            return mid;
        else if (mid > div)
            end = mid - 1;
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int num = 16;
    cout << "sqrt of " << num << " : " << mySqrt(num) << endl;

    return 0;
}