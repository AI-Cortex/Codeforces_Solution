// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Collecting Coins
// Link: https://codeforces.com/problemset/problem/1294/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c, n;
    while (t--)
    {
        cin >> a >> b >> c >> n;
        int m = max({a, b, c});
        int t = m - a + m - b + m - c;
        t = n - t;
        if (t >= 0 && t % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}