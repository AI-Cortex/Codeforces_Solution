// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Short Substrings
// Link: https://codeforces.com/problemset/problem/1367/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string str, s;
    int len;
    while (t--)
    {
        cin >> s;
        len = s.size();
        str.erase();

        for (int i = 0; i < len; i += 2)
            str += s[i];
        str += s[len - 1];

        cout << str << "\n";
    }

    return 0;
}