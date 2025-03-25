// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Love "A"
// Link: https://codeforces.com/problemset/problem/1146/A

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    size_t a = 0;
    for (auto ch : s)
        if (ch == 'a')
            a++;
    cout << min(2 * a - 1, s.size());

    return 0;
}