// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Anton and Letters
// Link: https://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    set<char> st;

    getline(cin, s);
    if(s.length() < 3)
        return cout << 0, 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',' || s[i] == '}')
            st.insert(s[i - 1]);
    }
    cout << st.size() << endl;
    return 0;
}