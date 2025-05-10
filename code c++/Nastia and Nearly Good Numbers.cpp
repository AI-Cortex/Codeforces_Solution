// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Nastia and Nearly Good Numbers
// link : https://codeforces.com/problemset/problem/1521/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (b == 1)
            cout << "NO\n";
        else
            cout << "YES\n"
                 << a << " " << a * b << " " << a * (b + 1) << "\n";
    }

    return 0;
}
