// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Minutes Before the New Year
// Link: https://codeforces.com/problemset/problem/1283/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int h, m, n;
    while (t--)
    {
        cin >> h >> m;
        n = 0;
        cout << (24 - h) * 60 - m << "\n";
    }
    return 0;
}