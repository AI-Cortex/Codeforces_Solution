// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Fix You
// link : https://codeforces.com/problemset/problem/1391/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int k = 0;
        char c;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> c;
                if (i == n - 1 && c == 'D')
                    k++;
                else if (j == m - 1 && c == 'R')
                    k++;
            }
        cout << k << "\n";
    }
    return 0;
}
