// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Arrival of the General
// Link: https://codeforces.com/problemset/problem/144/A

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num, max, max_index, min, min_index;
    max = INT_MIN;
    min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num > max)
        {
            max = num;
            max_index = i;
        }

        if (num <= min)
        {
            min = num;
            min_index = i;
        }
    }
    if (max_index > min_index)
        cout << max_index + n - min_index - 2;
    else
        cout << max_index + n - min_index - 1;

    return 0;
}