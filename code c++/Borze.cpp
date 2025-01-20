// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Borze
// Link: https://codeforces.com/problemset/problem/32/B

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '.')
            cout << 0;
        else if (s[i] == '-' && s[i + 1] == '.')
            cout << 1, i++;
        else if (s[i] == '-' && s[i + 1] == '-')
            cout << 2, i++;
    }
    return 0;
}