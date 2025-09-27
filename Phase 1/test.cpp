#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aabcbcdbca";
    int n = s.size();

    bool ar[26] = {};

    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[s[i] - 'a'] == 0)
            len++;
        ar[s[i] - 'a'] = 1;
    }

    bool check[26] = {};
    for (int i = 6; i < n; i++)
    {
        check[s[i] - 'a']++;
    }

    return 0;
}
