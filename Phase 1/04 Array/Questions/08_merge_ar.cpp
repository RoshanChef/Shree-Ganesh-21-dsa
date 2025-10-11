#include <bits/stdc++.h>
using namespace std;

// time O(M + N), space : O(M + N)
void mergeArrays(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();

    vector<int> ar(m + n);
    int i = 0, j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            ar[k++] = a[i++];
        else
            ar[k++] = b[j++];
    }

    while (i < n)
    {
        ar[k++] = a[i++];
    }

    while (j < m)
    {
        ar[k++] = b[j++];
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            a[i] = ar[i];
        else
            b[i - n] = ar[i];
    }
}

void mergeArrays2(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();

    int i = n - 1, j = 0;

    while (i >= 0 && j < m)
    {
        if (a[i] >= b[j])
            swap(a[i--], b[j++]);
        else
            break;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}

void mergeArrays3(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
}

int main()
{
}