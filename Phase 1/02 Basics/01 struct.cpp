#include <iostream>
using namespace std;

struct node
{
    string str;
    int num;
    double dub;
    void great()
    {
        cout << "Hello Roshan" << endl;
    }
    node()
    {
        str = "";
        num = 0;
        dub = 0.0; // initialize with 0.0 to avoid garbage values
    };
    node(string _str, int _num, double _dub)
    {
        str = _str;
        num = _num;
        dub = _dub;
    }
};

int main()
{

    node temp;
    cout << temp.num << endl;
    cout << temp.str << endl;
    cout << temp.dub << endl;   


    cout << "another node " << endl
         << endl;
    node second("Roshan", 10, 12.42);
    cout << second.num << endl;
    cout << second.str << endl;
    cout << second.dub << endl;


    // using new keyword
    node *third = new node("Krishna", 22, 423.324);
    cout << (*third).str << endl;
    cout << third->str << endl;
    cout << third->num << endl;
    cout << third->dub << endl;

    return 0;
}