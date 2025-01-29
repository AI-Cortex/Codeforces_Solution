// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Team Olympiad
// Link: https://codeforces.com/problemset/problem/490/A

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(3);
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v[t - 1].push_back(i + 1);
    }
    t = min({v[0].size(), v[1].size(), v[2].size()});
    cout << t << "\n";
    for (int i = 0; i < t; i++)
    {
        cout << " " << v[0][i] << " " << v[1][i] << " " << v[2][i] << "\n";
    }

    return 0;
}