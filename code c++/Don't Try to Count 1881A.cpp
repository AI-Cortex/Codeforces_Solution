// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Don't Try to Count
// link : https://codeforces.com/problemset/problem/1881/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        int k = 0;
        bool flag = false;
        while (n < m)
        {
            n *= 2;
            x += x;
            k++;
        }
        if (x.find(s) != string::npos)
        {
            cout << k << endl;
            continue;
        }

        x += x;
        k++;
        if (x.find(s) != string::npos)
        {
            cout << k << endl;
            continue;
        }
        cout << -1 << endl;
    }
    return 0;
}
