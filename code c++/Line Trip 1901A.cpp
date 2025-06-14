// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Line Trip
// link : https://codeforces.com/problemset/problem/1901/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int max_ = 1;
        int last(0), current(0);
        for (int i = 0; i < n; i++)
        {
            cin >> current;
            max_ = max(max_, current - last);
            last = current;
        }
        max_ = max(max_, 2 * (x - current));
        cout << max_ << endl;
    }
}