// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Good Kid
// Link: https://codeforces.com/problemset/problem/1873/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, min_, z;
    while (t--)
    {
        cin >> n;
        min_ = 10;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            min_ = min(min_, a[i]);
        }
        z = 1;
        for (auto n : a)
        {
            if (n == min_)
            {
                z *= (n + 1);
                min_ = -1;
            }
            else
                z *= n;
        }
        cout << z << "\n";
    }

    return 0;
}