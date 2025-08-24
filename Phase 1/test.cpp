#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> ar)
{

    for (int val : ar)
        cout << val << " ";
    cout << endl;
}

int main()
{
    vector<int> v = {50, 40, 30, 20, 10};

    cout << "Before : " << endl;
    print(v);

    cout << endl;

    sort(v.begin(), v.end());

    cout << "After : " << endl;
    print(v);
}
