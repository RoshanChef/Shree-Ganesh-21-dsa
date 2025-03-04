#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ar[20] = {};
    cout << sizeof(ar) / sizeof(int) << endl;

    vector<int> vr;

    vr.push_back(1); // {1}
    vr.push_back(2); // {1 , 2}
    vr.push_back(0); // {1 , 2 , 0}
    vr.push_back(3); // {1 , 2 ,0 , 3}

    cout << vr.size() << endl;

    vr.pop_back(); // {1 , 2 , 0}
    vr.pop_back(); // {1 , 2 }
    vr.pop_back(); // {1}

    cout << vr.size() << endl;

    // clear entire vector
    vr.clear(); // {}

    vector<int> v(4); // {0 , 0 , 0 , 0 }
    cout << "size is " << v.size() << endl;
    for (auto i : v)
        cout << i << " ";

    vector<int> v2(4, 10);
    // copy vector
    // vector<int> v3(v2.begin() + 2, v2.end());
    vector<int> v3(v2);

    cout << "\nsize : " << v3.size() << endl;
    cout << "Now value is " << endl;
    for (int ele : v3)
        cout << ele << " ";
    cout << endl;

    vector<int> vull;

    vull.emplace_back(10); // fast than push_back()
    vull.emplace_back(20);
    vull.emplace_back(30);

    for (auto ele : vull)
        cout << ele << " ";
    cout << endl;

    // 2D vector
    vector<vector<int>> vec;
    vector<int> first = {1, 2};
    vector<int> second = {10, 20};
    vector<int> third = {111, 222, 333};

    vec.emplace_back(first);
    vec.emplace_back(second);
    vec.emplace_back(third);

    // printing 2d Vector
    for (auto ele : vec)
    {
        for (auto itr : ele)
        {
            cout << itr << " ";
        }
        cout << endl;
    }

    // another way

    cout << " \nanother way" << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}