// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Colourblindness
// Link: https://codeforces.com/problemset/problem/1722/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    size_t len;
    string s1, s2;
    bool ans;
    while (t--)
    {
        cin >> len >> s1 >> s2;

        ans = true;
        for (size_t i = 0; i < len; i++)
        {
            if (s1[i] != s2[i] && (s1[i] == 'R' || s2[i] == 'R'))
            {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES\n" : "NO\n");
    }

    return 0;
}