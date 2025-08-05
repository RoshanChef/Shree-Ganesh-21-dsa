#include <iostream>
#include <vector>
using namespace std;

void last_occur(vector<int> &ar, int len, int ele, vector<int> &ans)
{

    int start = 0, end = len - 1, res = -1;

    while (start <= end)
    {
        int mid = end + (start - end) / 2;

        if (ar[mid] == ele)
        {
            res = mid;
            start = mid + 1;
        }
        else if (ar[mid] < ele)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // insert the answer
    ans.push_back(res);
}

void first_occur(vector<int> &ar, int len, int ele, vector<int> &ans)
{
    int start = 0, end = len - 1, res = -1;
    while (start <= end)
    {
        int mid = end + (start - end) / 2;
        if (ar[mid] == ele)
        {
            res = mid;
            end = mid - 1;
        }
        else if (ar[mid] < ele)
            start = mid + 1;
        else
            end = mid - 1;
    }
    // insert the answer
    ans.push_back(res);
}

vector<int> first_and_last(vector<int> &ar, int ele)
{

    vector<int> ans;
    int len = ar.size();

    // first occurence O(log n)
    first_occur(ar, len, ele, ans);

    // last occurence O(log n)
    last_occur(ar, len, ele, ans);

    return ans;
}

int main()
{

    vector<int> ar = {20, 40, 70, 80, 80, 80, 80, 80, 110};
    int len = sizeof(ar) / sizeof(int);
    int ele = 80;
    vector<int> result = first_and_last(ar, ele);

    return 0;
}