// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Subset Mex
// link : https://codeforces.com/problemset/problem/1406/A

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            m[num]++;
        }
        int a = 0, b = 0;
        for (; a < 102; a++)
            if (m[a] == 0)
                break;

        for (; b < 102; b++)
            if (m[b] < 2)
                break;
        cout << a + b << "\n";
    }

    return 0;
}
