// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Restoring Three Numbers
// Link: https://codeforces.com/problemset/problem/1154/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
        cout << a[3] - a[i] << " ";
    return 0;
}