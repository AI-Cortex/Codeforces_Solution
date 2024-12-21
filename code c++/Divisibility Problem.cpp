// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Divisibility Problem
// Link: https://codeforces.com/problemset/problem/1328/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    int a, b, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        d = a / b;
        if (d * b == a)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << (b * (d + 1)) - a << "\n";
        }
    }
    return 0;
}