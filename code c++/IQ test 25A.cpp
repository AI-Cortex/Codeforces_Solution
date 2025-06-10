// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : IQ test
// link : https://codeforces.com/problemset/problem/25/A

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int even = 0, index_odd = 0, index_even = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even++;
            index_even = i;
        }
        else
        {
            even--;
            index_odd = i;
        }
    }

    cout << (even > 0 ? index_odd : index_even);
    return 0;
}
