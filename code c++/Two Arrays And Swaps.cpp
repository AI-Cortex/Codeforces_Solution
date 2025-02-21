// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Two Arrays And Swaps
// Link: https://codeforces.com/problemset/problem/1353/B

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + n, greater<int>());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
                sum += max(a[i], b[i]);
            else
                sum += a[i];
        }
        cout << sum << "\n";
    }

    return 0;
}