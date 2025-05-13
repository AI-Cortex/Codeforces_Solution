// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Is It a Cat?
// link : https://codeforces.com/problemset/problem/1800/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        string s;
        cin >> len >> s;
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
                  { return tolower(c); });
        auto end = unique(s.begin(), s.end());

        s.resize(distance(s.begin(), end));
        if (s == "meow")
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}