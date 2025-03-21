// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Odd Set
// Link: https://codeforces.com/problemset/problem/1542/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, num;

    while (t--)
    {
        cin >> n;
        int odd_count = 0;
        int even_count = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> num;

            if (num % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
        cout << (odd_count == even_count ? "YES" : "NO") << "\n";
    }

    return 0;
}