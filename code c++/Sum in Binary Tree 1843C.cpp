// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Sum in Binary Tree
// link : https://codeforces.com/problemset/problem/1843/C

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long sum = 0;
        while (n)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << "\n";
    }
    return 0;
}
