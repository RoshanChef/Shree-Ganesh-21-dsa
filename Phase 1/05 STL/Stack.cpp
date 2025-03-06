#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "top element " << s.top() << endl;
    s.pop();
    cout << "stack top element " << s.top() << endl;
    cout << "size of stack" << s.size() << endl;
    cout << "is empty  " << s.empty() << endl;

    return 0;
}