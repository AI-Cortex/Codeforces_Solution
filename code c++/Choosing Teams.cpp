// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Choosing Teams
// Link: https://codeforces.com/problemset/problem/432/A

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int num, t = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (5 - num >= k)
            t++;
    }
    cout << t / 3;
    return 0;
}