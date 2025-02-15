// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Fair Division
// Link: https://codeforces.com/problemset/problem/1472/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num, sum = 0, one = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum += num;
            if (num == 1)
                one++;
        }
        if (sum & 1)
            cout << "NO\n";
        else
        {
            int half = sum / 2;
            if (half % 2 == 0 || one)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}