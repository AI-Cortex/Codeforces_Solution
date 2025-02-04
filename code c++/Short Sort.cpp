// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Short Sort
// Link: https://codeforces.com/problemset/problem/1873/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}