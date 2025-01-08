// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Soft Drinking
// Link: https://codeforces.com/problemset/problem/151/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min({(k * l) / nl, (c * d), p / np}) / n;
    return 0;
}