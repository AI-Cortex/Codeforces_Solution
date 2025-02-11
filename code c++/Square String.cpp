// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Square String?
// Link: https://codeforces.com/problemset/problem/1619/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    int len;
    while (t--)
    {
        cin >> s;
        len = s.size();
        if ((len % 2 == 0) && s.substr(0, len / 2) == s.substr(len / 2, len / 2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}