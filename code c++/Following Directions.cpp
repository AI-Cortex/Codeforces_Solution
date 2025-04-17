// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Following Directions
// link : https://codeforces.com/problemset/problem/1791/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, x, y;
    string s;
    while (t--)
    {
        cin >> n >> s;
        x = 0;
        y = 0;
        bool flag = false;
        for (auto ch : s)
        {
            switch (ch)
            {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            }
            if (x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
