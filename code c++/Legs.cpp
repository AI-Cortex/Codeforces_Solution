// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Legs
// Link: https://codeforces.com/problemset/problem/1996/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n;
        k = n / 4;
        n %= 4;
        k += n / 2;
        cout << k << "\n";
    }

    return 0;
}