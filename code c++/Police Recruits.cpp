// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Police Recruits
// Link: https://codeforces.com/problemset/problem/427/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int p = 0, num;
    while (n--)
    {
        int a, b;
        cin >> num;
        if (num < 0)
        {
            if (p)
            {
                p--;
            }
            else
            {
                count++;
            }
        }
        else
        {
            p += num;
        }
    }
    cout << count;
    return 0;
}