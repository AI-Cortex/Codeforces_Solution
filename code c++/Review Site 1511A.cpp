// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Review Site
// link : https://codeforces.com/problemset/problem/1511/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int up(0), down(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 2)
                down++;
            else
                up++;
        }
        cout << up << "\n";
    }
    return 0;
}
