#include <iostream>

using namespace std;

int first_occur(int ar[], int len, int key)
{
    int st = 0, end = len - 1;
    int ans = -1;

    while (st <= end)
    {
        int mid = (st - end) / 2 + end;
        if (ar[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (ar[mid] > key)
            end = mid - 1;
        else
            st = mid + 1;
    }

    return ans;
}

int last_occur(int ar[], int len, int key)
{
    int st = 0, end = len - 1;
    int ans = -1;

    while (st <= end)
    {
        int mid = (st - end) / 2 + end;
        if (ar[mid] == key)
        {
            ans = mid;
            st = mid + 1;
        }
        else if (ar[mid] > key)
            end = mid - 1;
        else
            st = mid + 1;
    }

    return ans;
}

int main()
{
    int even[] = {1, 2, 3, 3, 3, 3, 4, 5, 6};
    int n = sizeof(even) / sizeof(int);
    int first = first_occur(even, n, 3);
    int last = last_occur(even, n, 3);
    cout << "first occur " << first << endl;
    cout << "last occur " << last << endl;

    cout << "total occur " << (last - first) + 1;

    return 0;
}