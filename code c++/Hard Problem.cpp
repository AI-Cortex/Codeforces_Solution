// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Hard Problem
// Link: https://codeforces.com/problemset/problem/2044/C

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int m, a, b, c;
    while (t--)
    {

        cin >> m >> a >> b >> c;

        int seat_a = min(m, a);
        int seat_b = min(m, b);
        int seat_c = min(2 * m - seat_a - seat_b, c);

        cout << seat_a + seat_b + seat_c << "\n";
    }

    return 0;
}