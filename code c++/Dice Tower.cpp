// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Dice Tower
// link : https://codeforces.com/problemset/problem/225/A

#include <iostream>
using namespace std;

int main()
{
    int n, top;
    cin >> n >> top;

    int a, b;
    while (n--)
    {
        cin >> a >> b;
        if (top == a || top == b || top == 7 - a || top == 7 - b)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}
