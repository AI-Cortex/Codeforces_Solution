// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Minimal Square
// Link: https://codeforces.com/problemset/problem/1360/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, n;
    while (t--)
    {
        cin >> a >> b;
        n = min(max(a + a, b), max(a, b + b));
        cout << n * n << endl;
    }

    return 0;
}