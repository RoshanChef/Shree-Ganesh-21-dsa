#include <bits/stdc++.h>
using namespace std;
/*

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

    Input: nums1 = [1,2,2,1], nums2 = [2,2]
    Output: [2]

    Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
    Output: [9,4]

    ar1 => 1 2 2 2 3 4
    ar2 => 2 2 3 3
    ans => 2 2 3

    ar1 => 1 2 3
    ar2 => 3 4
    ans => 3

*/
vector<int> findArrayIntersection(vector<int> &ar1, int n, vector<int> &ar2, int m)
{
    vector<int> ans;
    // // O(n*m)
    // for(int i=0; i<n; i++){
    //     int current = ar1[i];
    //     for(int j=0; j<m; j++){
    //         if(current == ar2[j]){
    //             ans.push_back(current);
    //             ar2[j] = INT32_MIN;
    //             break;
    //         }
    //     }
    // }

    int i = 0, j = 0;

    // O(min(n,m))
    while (i < n && j < m)
    {
        if (ar1[i] == ar2[j])
        {
            ans.push_back(ar1[i]);
            i++, j++;
        }
        else if (ar2[j] > ar1[i])
            i++;
        else
            j++;
    }

    return ans;
}

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    int occur[1001] = {};
    int l1 = nums1.size();
    int l2 = nums2.size();
    vector<int> ans;

    // O(l1)
    for (int i = 0; i < l1; i++)
    {
        if (occur[nums1[i]] == 0)
        {
            occur[nums1[i]]++;
        }
    }

    // O(l2)
    for (int i = 0; i < l2; i++)
    {
        if (occur[nums2[i]] == 1)
        {
            occur[nums2[i]] = 0;
            ans.push_back(nums2[i]);
        }
    }

    return ans;
}



int main()
{

    return 0;
}