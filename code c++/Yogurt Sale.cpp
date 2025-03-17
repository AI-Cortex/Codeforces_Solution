// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Yogurt Sale
// Link: https://codeforces.com/problemset/problem/1955/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, n, b;
    while (t--)
    {
        cin >> n >> a >> b;
        if (a * 2 <= b)
            cout << n * a << "\n";
        else
            cout << (n / 2 * b) + (n % 2) * a << "\n";
    }

    return 0;
}