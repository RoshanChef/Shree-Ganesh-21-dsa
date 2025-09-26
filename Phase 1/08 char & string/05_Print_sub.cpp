#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "ababc";
    int n = s.size();

    cout << "String " << endl;
    cout << s << endl;
    cout << endl;

    cout << "All substrings:\n";
    // start index
    for (int i = 0; i < n; i++)
    {
        // end index
        for (int j = i; j < n; j++)
        {
            // print substring from i to j
            for (int k = i; k <= j; k++)
            {
                cout << s[k];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
