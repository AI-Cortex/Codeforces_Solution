// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: ABC
// Link: https://codeforces.com/problemset/problem/1632/A

#include <iostream>
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

        if (s.size() <= 2 && s != "11" && s != "00")
        {
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }

    return 0;
}