// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Is it rated?
// link : https://codeforces.com/problemset/problem/807/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool is_sorted = true;
    int a0 = 4127, a, b;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a != b)
        {
            cout << "rated";
            return 0;
        }

        if (a0 < a)
        {
            is_sorted = false;
        }
        a0 = a;
    }
    cout << (!is_sorted ? "unrated" : "maybe");
    return 0;
}
