#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{

    vector<int> ar = {
        1,
        3,
        3,
        3,
        2,
        5,
        5,
        5,
        5,
        5,
        5,
        5,
    };

    int maxi = 0;

    // max occurs number
    map<int, int> m;
    int len = ar.size();
    for (int i = 0; i < len; i++)
    {
        m[ar[i]]++;
        if (m[ar[i]] > m[maxi])
        {
            maxi = ar[i];
        }
    }
    cout << "maxi " << maxi << endl;

    return 0;
}