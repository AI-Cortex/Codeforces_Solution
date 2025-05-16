// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Gift Carpet
// link : https://codeforces.com/problemset/problem/1862/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string name = "vika";
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int index = 0;

        for (int j = 0; j < m; j++)
            for (int i = 0; i < n; i++)
                if (v[i][j] == name[index])
                    if (++index == name.size())
                        goto next;
                    else
                        break;

    next:
        if (index == name.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
