// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Maximum Increase
// link : https://codeforces.com/problemset/problem/702/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = 0, m = 0;
    int a, b;
    cin >> a;

    for (int i = 1; i < n; i++)
    {
        cin >> b;
        if (a < b)
            t++;
        else
        {
            m = max(m, t);
            t = 0;
        }
        a = b;
    }
    m = max(m, t);
    cout << m + 1;
    return 0;
}
