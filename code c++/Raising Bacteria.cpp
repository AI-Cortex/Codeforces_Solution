// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Raising Bacteria
// link : https://codeforces.com/problemset/problem/579/A

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int n = 0;
    while (x)
    {
        x &= x - 1;
        n++;
    }
    cout << n;

    return 0;
}
