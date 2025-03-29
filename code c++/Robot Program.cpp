// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Robot Program
// Link: https://codeforces.com/problemset/problem/1452/A

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
        cout << max(a + b, 2 * max(a, b) - 1) << endl;
    }

    return 0;
}