// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Blank Space
// Link: https://codeforces.com/problemset/problem/1829/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num, len;
    while (t--)
    {
        cin >> len;
        int n = 0, max_ = 0;
        while (len--)
        {
            cin >> num;
            if (num == 0)
                n++;
            else
            {
                max_ = max(max_, n);
                n = 0;
            }
        }
        max_ = max(max_, n);
        cout << max_ << "\n";
    }

    return 0;
}