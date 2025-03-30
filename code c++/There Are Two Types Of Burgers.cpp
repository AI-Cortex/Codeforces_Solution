// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : There Are Two Types Of Burgers
// link : https://codeforces.com/problemset/problem/1207/A

#include <iostream>
using namespace std;

int f1(int &b, int &p, int t)
{
    int m = min(b / 2, p);
    b -= 2 * m;
    p -= m;
    return m * t;
}

int main()
{
    int t;
    cin >> t;
    int b, p, f;
    int h, c;
    int cost;
    while (t--)
    {
        cin >> b >> p >> f >> h >> c;
        if (h > c)
            cout << f1(b, p, h) + f1(b, f, c) << "\n";

        else
            cout << f1(b, f, c) + f1(b, p, h) << "\n";
    }
    return 0;
}
