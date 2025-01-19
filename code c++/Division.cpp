// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Division?
// Link: https://codeforces.com/problemset/problem/1669/A

#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n <= 1399)
            cout << "Division 4\n";
        else if (1400 <= n && n <= 1599)
            cout << "Division 3\n";
        else if (1600 <= n && n <= 1899)
            cout << "Division 2\n";
        else
            cout << "Division 1\n";
    }

    return 0;
}