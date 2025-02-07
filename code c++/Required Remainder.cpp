// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Required Remainder
// Link: https://codeforces.com/problemset/problem/1374/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, n, k;
    while (t--)
    {
        cin >> x >> y >> n;
        k = n - (n % x) + y;
        if (k > n)
            k -= x;
        cout << k << "\n";
    }

    return 0;
}