#include <iostream>
using namespace std;

int main()
{
    string s = "abc";
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        string ans = "";
        for (int j = i; j < n; j++)
        {
            ans += s[j];
            cout << ans << " ";
        }
        cout << endl;
    }
}
