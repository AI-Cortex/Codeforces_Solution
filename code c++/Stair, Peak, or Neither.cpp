// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Stair, Peak, or Neither?
// Link: https://codeforces.com/problemset/problem/1950/A

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
        if (a < b && b < c)
            cout << "STAIR\n";
        else if (a < b && b > c)
            cout << "PEAK\n";
        else
            cout << "NONE\n";
    }
    return 0;
}