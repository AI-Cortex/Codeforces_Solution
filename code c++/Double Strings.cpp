// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Double Strings
// link : https://codeforces.com/problemset/problem/1703/D

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    while (t--)
    {
        int n;
        cin >> n;
        set<string> st;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        for (auto s : v)
        {
            bool flag = false;
            for (size_t i = 1; i < s.size() ; i++)
                if (st.find(s.substr(0, i)) != st.end() && st.find(s.substr(i)) != st.end())
                    flag = true;
            cout << flag;
        }
        cout << "\n";
    }

    return 0;
}
