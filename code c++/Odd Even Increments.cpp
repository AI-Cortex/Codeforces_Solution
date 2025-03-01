// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Odd/Even Increments
// Link: https://codeforces.com/problemset/problem/1669/C

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int odd = 0, even = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even && odd)
        {
            cout << "NO" << endl;
            continue;
        }
        odd = 0, even = 0;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even && odd)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }

    return 0;
}