// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : New Year Candles
// link : https://codeforces.com/problemset/problem/379/A


#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int n = a;
    while (a >= b)
    {
        n += a / b;
        a = a % b + a / b;
    }
    cout << n;

    return 0;
}