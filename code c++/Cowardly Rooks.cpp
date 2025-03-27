// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Cowardly Rooks
// Link: https://codeforces.com/problemset/problem/1749/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, m, x, y;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < m; i++)
            cin >> x >> y;
        cout << ((m < n) ? "YES\n" : "NO\n");
    }

    return 0;
}