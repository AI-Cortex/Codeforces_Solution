// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Multiplication Table
// link : https://codeforces.com/problemset/problem/577/A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n;
    cin >> n >> t;
    int m = n;
    if (n >= sqrt(t))
        n = sqrt(t);

    int k = 0;
    for (int i = 1; i <= n; i++)
        if (t % i == 0)
            if (t / i == i)
                k++;
            else if (t / i <= m)
                k += 2;

    cout << k;
    return 0;
}
