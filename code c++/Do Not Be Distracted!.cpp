// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Do Not Be Distracted!
// Link: https://codeforces.com/problemset/problem/1520/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;
    string s;
    while (t--)
    {
        cin >> n >> s;
        vector<int> v(26);
        char c = '0';
        bool flag = true;

        for (auto ch : s)
            if (ch == c)
                continue;
            else
            {
                if (v[ch - 'A'])
                {
                    flag = false;
                    break;
                }
                else
                {
                    v[ch - 'A'] = 1;
                    c = ch;
                }
            }
        cout << ((flag) ? "YES\n" : "NO\n");
    }

    return 0;
}