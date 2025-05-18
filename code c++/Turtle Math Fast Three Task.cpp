// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Turtle Math: Fast Three Task
// link : https://codeforces.com/problemset/problem/1933/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        int reminder_1 = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 3 == 1)
                reminder_1++;
            sum += a;
        }
        if (sum % 3 == 0)
            cout << 0 << endl;
        else if (sum % 3 == 1)
        {
            if (reminder_1 > 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }

        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
