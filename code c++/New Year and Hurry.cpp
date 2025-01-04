// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: New Year and Hurry
// Link: https://codeforces.com/problemset/problem/750/A

#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int time = 240 - t;
    int i = 0;
    while (i < n)
    {
        i++;
        time -= 5 * i;
        if (time < 0)
        {
            i--;
            break;
        }
    }

    cout << i;

    return 0;
}