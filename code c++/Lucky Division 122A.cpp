// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Lucky Division
// link : https://codeforces.com/problemset/problem/122/A

#include <iostream>
using namespace std;

bool f(int n, int d)
{
    if (d > n)
        return false;

    if (d != 0 && n % d == 0)
        return true;

    return f(n, d * 10 + 4) || f(n, d * 10 + 7);
}

int main()
{
    int n;
    cin >> n;
    if (f(n, 0))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
