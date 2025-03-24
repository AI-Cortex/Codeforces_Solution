// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Coins
// Link: https://codeforces.com/problemset/problem/1061/A

#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    cout << s / n + bool(n % s);
    return 0;
}