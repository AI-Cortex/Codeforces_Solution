// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Odd One Out
// Link: https://codeforces.com/problemset/problem/1915/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << (a ^ b ^ c) << endl;
    }

    return 0;
}