// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Print a Pedestal (Codeforces logo?)
// link : https://codeforces.com/problemset/problem/1690/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n -= 3;
        int base = n / 3;
        if (n % 3 == 0)
            cout << base + 1 << " " << base + 2 << " " << base << "\n";
        else if (n % 3 == 1)
            cout << base + 1 << " " << base + 3 << " " << base << "\n";
        else
            cout << base + 2 << " " << base + 3 << " " << base << "\n";
    }

    return 0;
}
