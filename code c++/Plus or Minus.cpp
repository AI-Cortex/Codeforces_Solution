// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Plus or Minus
// Link: https://codeforces.com/problemset/problem/1807/A

#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << (a + b == c ? "+\n" : "-\n");
    }

    return 0;
}