// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Upscaling
// link : https://codeforces.com/problemset/problem/1950/B

#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    for (int i = 0; i < 10; i++)
        s1 += "##..";
    s2 = ".." + s1;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                cout << s2.substr(0, 2 * n) << "\n"
                     << s2.substr(0, 2 * n) << "\n";
            else
                cout << s1.substr(0, 2 * n) << "\n"
                     << s1.substr(0, 2 * n) << "\n";
        }
    }

    return 0;
}
