// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Two Vessels
// link : https://codeforces.com/problemset/problem/1872/A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        double r = abs(a - b);
        r /= c;
        r /= 2;
        cout << (int)ceil(r) << endl;
    }

    return 0;
}
