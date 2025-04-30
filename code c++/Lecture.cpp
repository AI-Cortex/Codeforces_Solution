// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Lecture
// link : https://codeforces.com/problemset/problem/499/B

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    unordered_map<string, string> mp;

    for (int i = 0; i < m; i++)
    {
        cin >> s1 >> s2;
        mp[s1] = (s1.size() <= s2.size()) ? s1 : s2;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        cout << mp[s1] << " ";
    }
    return 0;
}
