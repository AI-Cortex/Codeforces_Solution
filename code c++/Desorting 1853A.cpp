// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Desorting
// link : https://codeforces.com/problemset/problem/1853/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        for (int i = 1; i < 9; i++)
        {
            if (s[1] - '0' == i)
                continue;
            cout << s[0] << i << "\n";
        }
        for (char ch = 'a'; ch < 'i'; ch++)
        {
            if (s[0] == ch)
                continue;
            cout << ch << s[1] << "\n";
        }
    }
    return 0;
}
