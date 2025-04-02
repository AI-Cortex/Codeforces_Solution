// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Fence
// link : https://codeforces.com/problemset/problem/1422/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << max({a, b, c}) << "\n";
    }
    return 0;
}
