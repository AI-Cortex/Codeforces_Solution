// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: A+B?
// Link: https://codeforces.com/problemset/problem/1772/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    while (t--)
    {
        cin >> s;
        cout << s[0] - '0' + s[2] - '0' << endl;
    }

    return 0;
}