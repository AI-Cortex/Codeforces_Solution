// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Epic Game
// link : https://codeforces.com/problemset/problem/119/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    while (true)
    {
        n -= __gcd(a, n);
        if (n <= 0)
        {
            cout << 0;
            break;
        }

        n -= __gcd(b, n);
        if (n <= 0)
        {
            cout << 1;
            break;
        }
    }
    return 0;
}
