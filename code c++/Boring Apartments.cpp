// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Boring Apartments
// Link: https://codeforces.com/problemset/problem/1433/A

#include <iostream>
#include <map>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<int, int> d = {
        {1, 1},
        {2, 3},
        {3, 6},
        {4, 10}
    };

    int n;
    while (t--)
    {
        cin >> n;
        int t = n % 10;
        cout << (t - 1) * 10 + d[log10(n) + 1] << "\n";
    }

    return 0;
}