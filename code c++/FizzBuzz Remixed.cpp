// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : FizzBuzz Remixed
// link : https://codeforces.com/problemset/problem/2070/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int count = n / 15 * 3;

        count += min(3, n % 15 + 1);
        cout << count << "\n";
    }

    return 0;
}
