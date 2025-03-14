// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Triple
// Link: https://codeforces.com/problemset/problem/1669/B

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<int, int> m;
    int n, num;
    int ans = -1;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            m[num]++;
            if (m[num] == 3)
            {
                ans = num;
            }
        }
        cout << ans << endl;
    }

    return 0;
}