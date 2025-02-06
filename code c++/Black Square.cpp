// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Black Square
// Link: https://codeforces.com/problemset/problem/431/A

#include <iostream>
using namespace std;

int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    string s;
    int cal = 0;
    cin >> s;
    for (auto ch : s)
        cal += a[ch - '0' - 1];
    cout << cal;

    return 0;
}