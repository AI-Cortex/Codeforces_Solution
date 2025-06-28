// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Make it Beautiful
// link : https://codeforces.com/problemset/problem/1783/A

#include <iostream>
#include <vector>
#include <algorithm>
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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        swap(v[0], v[1]);
        swap(v[0], v[n - 1]);
        if (v[0] == v[1])
            cout << "NO\n";
        else
        {
            cout << "YES\n";

            for (int i = 0; i < n; i++)
                cout << v[i] << ' ';
            cout << '\n';
        }
    }

    return 0;
}