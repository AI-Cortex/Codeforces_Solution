// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Make it White
// Link: https://codeforces.com/problemset/problem/1927/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int len;
    string s;
    while (t--)
    {
        cin >> len >> s;
        int start = 0, end = 0;
        for (int i = 0; i < len; i++)
            if (s[i] == 'B')
            {
                start = i + 1;
                break;
            }

        for (int i = len - 1; i > -1; i--)
            if (s[i] == 'B')
            {
                end = i + 1;
                break;
            }

        cout << ((end - start) + (start || end)) << "\n";
    }

    return 0;
}