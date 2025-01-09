// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Buy a Shovel
// Link: https://codeforces.com/problemset/problem/732/A

#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int n = 0;
    for (int i = 1; i < 11; i++)
        if ((i * k) % 10 == 0 || (i * k) % 10 == r)
        {
            n = i;
            break;
        }

    cout << n << endl;
    return 0;
}