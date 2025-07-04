// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Maximum in Table
// link : https://codeforces.com/problemset/problem/509/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        a[0][i] = 1;
        a[i][0] = 1;
    }

    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            a[i][j] = a[i - 1][j] + a[i][j - 1];

    cout << a[n - 1][n - 1];
    return 0;
}
