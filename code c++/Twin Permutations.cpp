// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Twin Permutations
// Link: https://codeforces.com/problemset/problem/1831/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, num;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            cout << n - num + 1 << " ";
        }

        cout << "\n";
    }

    return 0;
}