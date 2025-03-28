// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Equation
// link : https://codeforces.com/problemset/problem/1269/A

#include <iostream>
using namespace std;

bool f(int x)
{
    if (x < 4)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int b = 4;
    int a = b + n;

    while (!f(a) || !f(b))
    {
        b++;
        a = b + n;
    }

    cout << a << " " << b << endl;
    return 0;
}