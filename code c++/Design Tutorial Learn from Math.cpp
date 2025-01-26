// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Design Tutorial: Learn from Math
// Link: https://codeforces.com/problemset/problem/472/A

#include <iostream>
using namespace std;

bool f(int n)
{
    if (n <= 1)
        return false;
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }
}

int main()
{
    int n;
    cin >> n;
    int a, b;
    if (n & 1)
        a = n / 2 + 1, b = n / 2;
    else
        a = b = n / 2;
    while (f(a) || f(b))
    {
        a++, b--;
    }
    cout << a << " " << b;

    return 0;
}