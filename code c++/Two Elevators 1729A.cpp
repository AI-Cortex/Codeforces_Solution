// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Two Elevators
// link : https://codeforces.com/problemset/problem/1729/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = c + abs(b - c);
        if (a < d)
            cout << 1 << "\n";
        else if (a > d)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }

    return 0;
}
