// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Panoramix's Prediction
// Link: https://chatgpt.com/c/67a56a39-30e4-8013-b07d-c6eb35cd3383

#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    bool flag = true;
    if (!prime(b))
    {
        cout << "NO";
        return 0;
    }
    b--;
    while (b > a)
    {

        if (prime(b))
        {
            cout << "NO";
            return 0;
        }
        b--;
    }

    cout << "YES";

    return 0;
}