// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Hit the Lottery
// Link: https://codeforces.com/problemset/problem/996/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t = n / 100;
    n %= 100;

    t += n / 20;
    n %= 20;

    t += n / 10;
    n %= 10;

    t += n / 5;
    n %= 5;

    t += n;
    cout << t;

    return 0;
}