// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Problem Generator
// Link: https://codeforces.com/problemset/problem/1980/A

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    size_t len;
    int m;
    string s;

    while (t--)
    {
        map<char, int> d{
            {'A', 0},
            {'B', 0},
            {'C', 0},
            {'D', 0},
            {'E', 0},
            {'F', 0},
            {'G', 0},
        };
        cin >> len >> m >> s;
        for (auto ch : s)
            d[ch]++;
        int ans = 0;
        for (auto p : d)
            if (p.second < m)
                ans += m - p.second;
        cout << ans << "\n";
    }

    return 0;
}