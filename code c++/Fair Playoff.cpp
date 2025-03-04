// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Fair Playoff
// Link: https://codeforces.com/problemset/problem/1535/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (min(a, b) < max(c, d) && max(a, b) > min(c, d))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}