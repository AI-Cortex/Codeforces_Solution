// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Twins
// link : https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    int sum = accumulate(v.begin(), v.end(), 0);
    int coin = 0;
    int i = 0;
    for (; i < n; i++)
    {
        coin += v[i];
        if (coin > sum - coin)

            break;
    }
    cout << i + 1;

    return 0;
}
