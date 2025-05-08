// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Dreamoon and Stairs
// link : https://codeforces.com/problemset/problem/476/A

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int two = n / 2;
    int one = n % 2;

    for (int i = two + one; i <= two * 2 + one; i++)
        if (i % m == 0)
        {
            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}
