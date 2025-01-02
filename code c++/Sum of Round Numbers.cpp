// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of Round Numbers
// Link: https://codeforces.com/problemset/problem/1352/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, z;
    cin >> t;
    while (t--)
    {
        cin >> n;
        z = 1;
        vector<int> v;
        while (n)
        {
            if (n % 10)
            {
                v.push_back(n % 10 * z);
            }
            n /= 10;
            z *= 10;
        }
        cout << v.size() << endl;
        for (auto &a : v)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}