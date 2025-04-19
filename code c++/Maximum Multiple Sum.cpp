// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Maximum Multiple Sum
// link : https://codeforces.com/problemset/problem/1985/B

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

        cout << (n == 3 ? n : 2) << "\n";
    }

    return 0;
}
