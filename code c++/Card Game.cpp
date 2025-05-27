// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Card Game
// link : https://codeforces.com/problemset/problem/2104/C

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (s == "AB" || (s[0] == 'A' && s[n - 1] == 'A') || (s[n - 2] == 'A' && s[n - 1] == 'A') || (n > 2 && count(s.begin(), s.end(), 'B') == 1))

            cout << "Alice\n";

        else

            cout << "Bob\n";
    }
    return 0;
}
