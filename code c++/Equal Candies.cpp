// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Equal Candies
// Link: https://codeforces.com/problemset/problem/1676/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, eat, min_;
    while (t--)
    {
        cin >> n;
        min_ = 1e7;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            min_ = min(min_, a[i]);
        }
        eat = 0;
        for (auto num : a)
            eat += num - min_;
        cout << eat << "\n";
    }

    return 0;
}