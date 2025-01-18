// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Spy Detected!
// Link: https://codeforces.com/problemset/problem/1512/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k = (a[0] == a[1]) ? a[0] : a[2];
        int index;
        for (int i = 0; i < n; i++)
            if (a[i] != k)
                index = i;
        cout << index + 1 << "\n";
    }

    return 0;
}