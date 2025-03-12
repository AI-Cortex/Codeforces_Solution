// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Honest Coach
// Link: https://codeforces.com/problemset/problem/1360/B

#include <iostream>
#include <vector>
#include <algorithm>
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
        sort(v.begin(), v.end());
        int m = v[1] - v[0];
        for (size_t i = 2; i < v.size(); i++)
            m = min(m, v[i] - v[i - 1]);
        cout << m << "\n";
    }

    return 0;
}