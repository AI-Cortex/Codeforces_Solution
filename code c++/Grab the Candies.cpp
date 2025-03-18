// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Grab the Candies
// Link: https://codeforces.com/problemset/problem/1807/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int sum_even, sum_odd;
    int n, num;

    while (t--)
    {
        sum_even = 0;
        sum_odd = 0;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num & 1)
                sum_odd += num;
            else
                sum_even += num;
        }
        if (sum_even > sum_odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}