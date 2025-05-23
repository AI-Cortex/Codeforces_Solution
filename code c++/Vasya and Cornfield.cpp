// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Vasya and Cornfield
// link : https://codeforces.com/problemset/problem/1030/B

#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if ((y >= x - d) && (y <= x + d) && (y >= -x + d) && (y <= -x + 2 * n - d))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
