// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Kefa and First Steps
// link : https://codeforces.com/problemset/problem/580/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_ = 0, t = 0;
    int a = -1, b;
    while (n--)
    {
        cin >> b;
        if (b >= a)
            t++;
        else
        {
            max_ = max(max_, t);
            t = 1;
        }

        a = b;
    }
    max_ = max(max_, t);
    cout << max_;

    return 0;
}
