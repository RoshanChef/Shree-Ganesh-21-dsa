#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> ar)
{

    for (int val : ar)
        cout << val << " ";
    cout << endl;
}

int main()
{
    vector<vector<int>> v;
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {10, 20, 30, 40, 50};
    vector<int> c = {100, 200, 300, 400, 500};

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    for (vector<int> row : v)
        print(row);

    cout << "size " << v.size() + v[0].size() << endl;

    return 0;
}