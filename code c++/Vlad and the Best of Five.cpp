// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Vlad and the Best of Five
// Link: https://codeforces.com/problemset/problem/1926/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    int a;
    while (t--)
    {
        cin >> s;
        a = 0;
        for (auto ch : s)
            if (ch == 'A')
                a++;
        cout << ((a > 2) ? "A\n" : "B\n");
    }

    return 0;
}