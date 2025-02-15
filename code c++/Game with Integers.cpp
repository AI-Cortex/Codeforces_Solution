// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Game with Integers
// Link: https://codeforces.com/problemset/problem/1899/A

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
        cout << ((n % 3) ? "First\n" : "Second\n");
    }

    return 0;
}