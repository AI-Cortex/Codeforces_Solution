// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Multiply by 2, divide by 6
// link : https://codeforces.com/problemset/problem/1374/B

#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int two(0), three(0);
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
                two++;
            }
            else if (n % 3 == 0)
            {
                n /= 3;
                three++;
            }
            else
                break;
        }
        if (two > three || n > 1)
        {
            cout << -1 << endl;
            continue;
        }

        cout << 2 * three - two << endl;
    }

    return 0;
}
