// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : New Year Transportation
// link : https://codeforces.com/problemset/problem/500/A

#include <iostream>
using namespace std;

int main()
{
    int n, t, num, pos = 1;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        if (pos == t)
        {
            cout << "YES";
            return 0;
        }
        if (pos > t)
            break;

        cin >> num;
        if (i + 1 == pos)
            pos += num;
    }
    cout << "NO";
    return 0;
}
