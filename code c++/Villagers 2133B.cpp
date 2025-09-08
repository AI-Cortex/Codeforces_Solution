// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Villagers
// link : https://codeforces.com/problemset/problem/2133/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        long long ans = 0;
        n--;
        while (n >= 0)
        {
            ans += a[n];
            n -= 2;
        }
        cout << ans << endl;
    }

    return 0;
}
