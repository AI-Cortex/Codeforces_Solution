// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: I_love_%username%
// Link: https://codeforces.com/problemset/problem/155/A

#include <iostream>
using namespace std;

int main()
{
    int n, t = 0;
    cin >> n;
    int score;
    cin >> score;

    int min = score, max = score;
    for (int i = 1; i < n; i++)
    {
        cin >> score;
        if (score < min)
        {
            min = score;
            t++;
        }
        if (score > max)
        {
            max = score;
            t++;
        }
    }
    cout << t;
    return 0;
}