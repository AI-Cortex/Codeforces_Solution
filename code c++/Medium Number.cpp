// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Medium Number
// Link: https://codeforces.com/problemset/problem/1760/A

#include <iostream>
using namespace std;

int f(int a, int b, int c)
{
    if ((a > b && a < c) || (a > c && a < b))
        return a;
    if ((b > a && b < c) || (b > c && b < a))
        return b;
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << f(a, b, c) << "\n";
    }
    return 0;
}