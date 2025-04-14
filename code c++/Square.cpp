// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Square
// link : https://codeforces.com/problemset/problem/1921/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x0, x1, y0, y1;
    int side;
    while (t--)
    {
        cin >> x0 >> y0;

        for (int i = 0; i < 3; i++)
        {
            cin >> x1 >> y1;
            if (x0 == x1)
                side = abs(y0 - y1);
        }
        cout << side * side << "\n";
    }

    return 0;
}
