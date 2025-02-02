// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Balanced Array
// Link: https://codeforces.com/problemset/problem/1343/B

#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {

        cin >> n;
        if (n % 4 == 0)
        {
            cout << "YES\n";
            int a = n / 2;
            for (int i = 2; i <= n; i += 2)
                cout << i << " ";

            for (int i = 1; i < n - 1; i += 2)
                cout << i << " ";

            // Compute last odd number to balance sum
            cout << (n / 2) * (n / 2 + 1) - (n / 2 - 1) * (n / 2 - 1) << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}