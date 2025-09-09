#include <iostream>

using namespace std;

// find function in cpp
int finddi(string hay, string needle)
{
    int l1 = hay.length();
    int l2 = needle.length();

    for (int i = 0; i <= l1 - l2; i++)
    {
        bool flag = true;
        for (int j = 0; j < l2; j++)
        {
            if (hay[i + j] != needle[j])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    // strings are mutable in cpp

    // delimiter in string
    // string str;
    // cout << "Enter the value " << endl;
    // getline(cin, str, '.');

    // cout << "The value : " << str << endl;

    string s;
    // cin>> s ;
    getline(cin, s);
    cout << "val " << s << endl;

    s = "Roshan";

    if (s[6] == 0)
    {
        cout << "yes it is" << endl;
    }

    char ch[6] = {'b', 'a', '\0', 'b', 'a', 'r'};
    cout << ch << endl;
    string sc = "babbar";
    sc[2] = 0;
    cout << "val " << sc << endl;

    sc = "roshan";
    cout << "length : " << sc.length() << endl;
    cout << "size : " << sc.size() << endl;
    cout << "is empty : " << sc.empty() << endl;
    sc.clear();

    cout << "is empty : " << sc.empty() << endl;

    string str = "aoshan";
    str.push_back('N');
    cout << str << endl;
    str.pop_back();
    str.pop_back();
    cout << str << endl;

    string res("ellion");

    cout << res << endl;
    cout << res.front() << endl;
    cout << res.back() << endl;
    cout << res.at(3) << endl;
    cout << res << endl;

    cout << res.substr(0, 4) << endl; // remember

    // comparison
    string str1 = "green";
    string str2 = "green";
    bool equal = str1 == str2;

    if (equal)
    {
        cout << "Yes both are equal " << endl;
    }

    // another way
    int check = str1.compare(str2); // check using minus the ascii value
    cout << check << endl;

    // find
    string sentance = "Hello everyoneer how are you today !!";
    string target = "everyone";
    int index = sentance.find(target);
    cout << "index at " << index << endl;

    // replace
    str = "This is my first Message";
    string word = "Roshan";
    str.replace(0, 4, word);
    cout << str << endl;

    // erase
    str = "Roshan is there for some reason I have";
    cout << str.erase(1, 5) << endl;

    return 0;
}