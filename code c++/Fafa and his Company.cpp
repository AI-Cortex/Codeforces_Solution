// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Fafa and his Company
// Link: https://codeforces.com/problemset/problem/935/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            ans++;

    cout << ans << endl;

    return 0;
}