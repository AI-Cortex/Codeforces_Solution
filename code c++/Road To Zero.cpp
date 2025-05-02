// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Road To Zero
// link : https://codeforces.com/problemset/problem/1342/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long x, y, a, b;
    while (t--)
    {
        cin >> x >> y >> a >> b;
        long long total = abs(x - y) * a;

        if (2 * a < b)
            total += min(x, y) * a * 2;
        else
            total += min(x, y) * b;
        cout << total << endl;
    }
    return 0;
}
