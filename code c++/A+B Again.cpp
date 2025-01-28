// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: A+B Again?
// Link: https://codeforces.com/problemset/problem/1999/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        cout << n % 10 + n / 10 << "\n";
    }

    return 0;
}