#include <iostream>
using namespace std;

/*
    Given a string s, return true if the s can be palindrome after deleting at most one character from it.

    Input: ["23:50","23:55","00:00","00:05","12:00"]
    Output: 5

    Input: ["05:00","05:10","05:20","05:25","06:00","06:40","07:15"]
    Output: 5

    Input: ["01:00","03:15","04:45","07:30","12:00","15:20","18:10","21:55","23:50"]
    Output: 15
*/

bool isvalid(string &s, int st, int e)
{
    while (st <= e)
    {
        if (s[st] != s[e])
            return false;
        st++;
        e--;
    }
    return true;
}

bool validPalindrome(string s)
{
    int st = 0, e = s.size() - 1;

    while (st <= e)
    {
        if (s[st] != s[e])
        {
            return isvalid(s, st + 1, e) || isvalid(s, st, e - 1);
        }
        st++;
        e--;
    }
    return true;
}

int main()
{
}