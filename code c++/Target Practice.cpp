// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Target Practice
// Link: https://codeforces.com/problemset/problem/1873/C

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    while (t--)
    {
        int point = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> s;
            for (int j = 0; j < 10; j++)
                if (s[j] == 'X')
                    point += 1 + min({i, j, 9 - i, 9 - j});
        }
        cout << point << "\n";
    }

    return 0;
}