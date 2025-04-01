// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Two distinct points
// link : https://codeforces.com/problemset/problem/1108/A

#include <iostream>
using namespace std;

int main()
{
    int a1, a2, b1, b2;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> a2 >> b1 >> b2;
        if (a1 == b1)
            b1++;
        cout << a1 << " " << b1 << "\n";
    }

    return 0;
}
