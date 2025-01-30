// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: To My Critics
// Link: https://codeforces.com/problemset/problem/1850/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b > 9 || a + c > 9 || b + c > 9)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}