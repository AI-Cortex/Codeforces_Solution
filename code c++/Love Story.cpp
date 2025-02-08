// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Love Story
// Link: https://codeforces.com/problemset/problem/1829/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s1="codeforces", s2;
    int n;
    while (t--)
    {
        cin >> s2;
        n = 0;
        for (int i = 0; i < 10; i++)
            if (s1[i] != s2[i])
                n++;
        cout << n << "\n";
    }

    return 0;
}