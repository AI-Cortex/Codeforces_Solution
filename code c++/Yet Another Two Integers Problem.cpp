// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Yet Another Two Integers Problem
// Link: https://codeforces.com/problemset/problem/1409/A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, dif;
    while (t--)
    {
        cin >> a >> b;
        dif = abs(a - b);
        cout << (dif / 10) + bool(dif % 10) << "\n";
    }

    return 0;
}