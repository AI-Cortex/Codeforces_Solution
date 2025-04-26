// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : cAPS lOCK
// link : https://codeforces.com/problemset/problem/131/A

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int t = 0;
    for (size_t i = 1; i < s.size(); i++)
        if ('A' <= s[i] && s[i] <= 'Z')
            t++;
        else
            break;

    if (s.size() == t + 1)
    {
        for (auto &ch : s)
            ch ^= 32;
    }

    cout << s;
    return 0;
}
