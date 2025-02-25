// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Cherry
// Link: https://codeforces.com/problemset/problem/1554/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (auto &num : v)
            cin >> num;

        long long max_ = 0;
        for (size_t i = 1; i < v.size(); i++)
            max_ = max(max_, (long long)v[i] * v[i - 1]);
        cout << max_ << "\n";
    }

    return 0;
}