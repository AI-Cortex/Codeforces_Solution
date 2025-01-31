// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Die Roll
// Link: https://codeforces.com/problemset/problem/9/A

#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    int w, y;
    cin >> w >> y;
    int p = 6 - max(w, y) + 1;
    int k = gcd(6, p);
    cout << p / k << "/" << 6 / k;
    return 0;
}