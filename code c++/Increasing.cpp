// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Increasing
// Link: https://codeforces.com/problemset/problem/1742/B

#include <iostream>
#include <algorithm>
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

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        bool flag = true;
        for (size_t i = 1; i < n; i++)
            if (v[i] == v[i - 1])
            {
                flag = false;
                break;
            }
        cout << ((flag) ? "YES\n" : "NO\n");
    }

    return 0;
}