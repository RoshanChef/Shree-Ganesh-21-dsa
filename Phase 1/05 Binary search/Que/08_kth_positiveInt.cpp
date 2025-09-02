#include <iostream>
using namespace std;

// brute force O(N)
int kth_missin_pos(int ar[], int k, int len)
{
    int ans = 0;
    int cnt = 1;
    int i = 0;

    while (k > 0)
    {
        if (i < len && ar[i] == cnt)
        {
            i++;
        }
        else
        {
            k--;
            ans = cnt;
        }
        cnt++;
    }
    return ans;
}

// binary search O(log N)
int kth_mis_pos(int ar[], int k, int len)
{
    int st = 0, end = len - 1;
    int ans = len;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        int missing_inx = ar[mid] - (mid + 1);

        if (missing_inx >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans + k;
}

int main()
{

    int ar[] = {2, 3, 4, 7, 11, 12};
    int len = sizeof(ar) / sizeof(int);
    int k = 5;

    int ans = kth_mis_pos(ar, k, len);
    cout << "ans : " << ans;
    return 0;
}