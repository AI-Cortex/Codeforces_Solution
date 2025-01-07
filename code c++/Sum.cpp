// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum
// Link: https://codeforces.com/problemset/problem/1742/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, a[3];
    cin >> t;
    while (t--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        cout << ((a[0] + a[1] == a[2]) ? "YES\n" : "NO\n");
    }

    return 0;
}