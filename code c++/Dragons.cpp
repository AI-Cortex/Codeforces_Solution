// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Dragons
// link : https://codeforces.com/problemset/problem/230/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, s;
    cin >> s >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());
    
    for (auto p : v)
        if (p.first < s)
            s += p.second;
        else
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";

    return 0;
}
