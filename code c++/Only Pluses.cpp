// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Only Pluses
// link : https://codeforces.com/problemset/problem/1992/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        for (int i = 0; i < 5; i++)
        {
            if (a <= b && a <= c)
                a++;
            else if (b <= a && b <= c)
                b++;
            else
                c++;
        }
        cout << a * b * c << "\n";
    }

    return 0;
}
