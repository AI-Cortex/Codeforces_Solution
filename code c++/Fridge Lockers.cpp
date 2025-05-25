// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Fridge Lockers
// link : https://codeforces.com/problemset/problem/1255/B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int num, sum = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> num;
            sum += num;
        }

        if (n == m && n > 2)
        {

            cout << 2 * sum << endl;
            for (int i = 1; i < m; i++)
                cout << i << " " << i + 1 << endl;
            cout << m << " " << 1 << endl;
        }

        else
            cout << -1 << "\n";
    }

    return 0;
}
