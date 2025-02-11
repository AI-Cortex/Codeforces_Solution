// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Plus One on the Subset
// Link: https://codeforces.com/problemset/problem/1624/A

#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int n, num, max_, min_;
    while (t--)
    {
        cin >> n >> num;
        max_ = min_ = num;

        for (int i = 1; i < n; i++)
        {
            cin >> num;
            min_ = min(min_, num);
            max_ = max(max_, num);
        }
        cout << max_ - min_ << "\n";
    }

    return 0;
}