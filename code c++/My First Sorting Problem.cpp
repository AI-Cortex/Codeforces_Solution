// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: My First Sorting Problem
// Link: https://codeforces.com/problemset/problem/1971/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << endl;
    }

    return 0;
}