// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Customising the Track
// link : https://codeforces.com/problemset/problem/1543/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int num;
        unsigned long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum += num;
        }
        int r = sum % n;
        cout << 1LL * r * (n - r) << "\n";
    }

    return 0;
}
