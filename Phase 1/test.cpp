#include <iostream>
#include <vector>
using namespace std;

int min_ele(vector<int> ar)
{
    int mini = 0;
    int s = 0, e = ar.size() - 1;

    if (ar[0] < ar[e])
        return ar[0];

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (ar[0] <= ar[mid])
            s = mid + 1;
        else
        {
            e = mid;
            mini = ar[mid];
        }
    }
    return mini;
}

int main()
{
    vector<int> ar = {3, 3,3, 3, 3};
    cout << min_ele(ar) << endl;
}
