#include <bits/stdc++.h>
using namespace std;

int main()
{

    multiset<int> st;
    st.insert(6);
    st.insert(6);
    st.insert(6);
    st.insert(3);
    st.insert(2);
    st.insert(3);
    st.insert(5);

    for (auto it : st)
    {
        cout<< it << " ";
    }
    

    return 0;
}
