// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Vasya the Hipster
// Link: https://codeforces.com/problemset/problem/581/A

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int t1 = min(a, b);
    int t2 = (max(a, b) - t1) / 2;
    cout << t1 << " " << t2;
    return 0;
}