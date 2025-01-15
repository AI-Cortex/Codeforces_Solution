// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Marathon
// Link: https://codeforces.com/problemset/problem/1692/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[4], n;
    while (t--)
    {
        n = 0;
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        for (int i = 1; i < 4; i++)
            if (a[0] < a[i])
                n++;
        cout << n << endl;
    }
    return 0;
}