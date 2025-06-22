// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : One and Two
// link : https://codeforces.com/problemset/problem/1788/A

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
        vector<int> v(n);
        int k = -1;
        int p2 = 0;
        int p1 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 2)
                p2++;
        }
        if (p2 % 2 == 1)
        {
            cout << k << "\n";
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 2)
            {
                p1++;
                p2--;
            }

            if (p2 == p1)
            {
                k = i + 1;
                break;
            }
        }

        cout << k << "\n";
    }
    return 0;
}
