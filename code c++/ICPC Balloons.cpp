// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: ICPC Balloons
// Link: https://codeforces.com/problemset/problem/1703/B

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;
    string s;
    while (t--)
    {
        set<char> st;
        cin >> n >> s;
        for (auto ch : s)
            st.insert(ch);

        cout << n + st.size() << endl;
    }
    return 0;
}