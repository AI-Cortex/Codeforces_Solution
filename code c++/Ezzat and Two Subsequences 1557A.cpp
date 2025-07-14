// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Ezzat and Two Subsequences
// link : https://codeforces.com/problemset/problem/1557/A

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        long long num;
        long long max_;
        cin >> num;
        sum = max_ = num;
        for (int i = 1; i < n; i++)
        {
            cin >> num;
            sum += num;
            max_ = max(max_, num);
        }
        cout << fixed << setprecision(9) << max_ + (sum - max_ * 1.0) / (n - 1) << endl;
    }

    return 0;
}
