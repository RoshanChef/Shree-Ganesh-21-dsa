#include <iostream>
using namespace std;

// time : O(N*N*N), space : O(1)
int lengthOfLongestSubstring(string s)
{
    int n = s.size();

    int max_len = 0;
    for (int row = 0; row < n; row++)
    {
        for (int inside = row; inside < n; inside++)
        {
            int len = 0;
            int seen[128] = {};

            for (int sub_str = row; sub_str <= inside; sub_str++)
            {
                char cur = s[sub_str];
                seen[cur]++;
                if (seen[cur] > 1)
                {
                    len = 0;
                    break;
                }
                len++;
            }
            max_len = max(len, max_len);
        }
    }

    return max_len;
}

int main()
{
    string s = "ABABC";
    cout << "Length of longest substring without repeating characters: "
         << lengthOfLongestSubstring(s) << endl;
    return 0;
}
