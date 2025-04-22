// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Chips on the Board
// link : https://codeforces.com/problemset/problem/1879/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long a = 0, b = 0;
        long long min_a = 1e9, min_b = 1e9;
        long long num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            min_a = min(min_a, num);
            a += num;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            min_b = min(min_b, num);
            b += num;
        }

        cout << min(min_a * n + b, min_b * n + a) << "\n";
    }
    return 0;
}
