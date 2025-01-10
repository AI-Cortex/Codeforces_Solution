// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: YES or YES?
// Link: https://codeforces.com/problemset/problem/1703/A

#include <iostream>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's' && s.size() == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}