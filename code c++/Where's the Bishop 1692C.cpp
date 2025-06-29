// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Where's the Bishop?
// link : https://codeforces.com/problemset/problem/1692/C

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> v(8);

    while (t--)
    {

        for (int i = 0; i < 8; i++)
            cin >> v[i];
        int i = 0;
        while (count(v[i].begin(), v[i].end(), '#') <= 1)
            i++;

        while (count(v[i].begin(), v[i].end(), '#') == 2)
            i++;

        cout << i + 1 << " " << v[i].find('#') + 1 << endl;
    }

    return 0;
}
