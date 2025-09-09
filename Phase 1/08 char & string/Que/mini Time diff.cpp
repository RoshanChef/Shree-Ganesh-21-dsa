#include <bits/stdc++.h>
using namespace std;
/*

Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","23:59","00:00"]
Output: 0

*/

int findMinDifference(vector<string> &timePoints)
{
    vector<int> ans;
    int len = timePoints.size();

    // Convert time points to minutes
    for (int i = 0; i < len; i++)
    {
        int hr = stoi(timePoints[i].substr(0, 2)) * 60;
        int minutes = stoi(timePoints[i].substr(3, 2));
        ans.push_back(hr + minutes);
    }

    // Sort time points in minutes
    sort(ans.begin(), ans.end());

    // Calculate min difference
    int mini = INT32_MAX;
    for (int i = 0; i < len - 1; i++)
    {
        int diff = ans[i + 1] - ans[i];
        mini = min(mini, diff);
    }

    // Handle circular time difference (crossing midnight)
    int circularDiff = (1440 + ans[0] - ans[len - 1]) % 1440;
    mini = min(mini, circularDiff);

    return mini;
}

int main()
{

    return 0;
}