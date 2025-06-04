// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Young Physicist
// link : https://codeforces.com/problemset/problem/69/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, z, x1, y1, z1;
    x = y = z = 0;
    while (t--)
    {
        cin >> x1 >> y1 >> z1;
        x += x1;
        y += y1;
        z += z1;
    }
    if (x || y || z)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
