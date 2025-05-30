// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Dorms War
// link : https://codeforces.com/problemset/problem/1670/B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<bool> v(26, false);
        string s;
        int len;
        cin >> len >> s;
        int n;
        char ch;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ch;
            v[ch - 'a'] = true;
        }

        int max_len = 0;
        int current = 0;
        for (int i = 0; i < len; i++)
        {
            if (v[s[i] - 'a'])
            {
                max_len = max(max_len, current);
                current = 1;
            }
            else
                current++;
        }
        cout << max_len << endl;
    }

    return 0;
}
