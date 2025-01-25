// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Dislike of Threes
// Link: https://codeforces.com/problemset/problem/1560/A

#include <iostream>
#include <vector>
using namespace std;

bool f(int n)
{
    return (n % 3 != 0 && n % 10 != 3);
}

int main()
{
    int t;
    cin >> t;

    vector<int> a;
    for (int i = 1; a.size() < 1000; i++)
    {
        if (f(i))
            a.push_back(i);
    }

    int k;
    while (t--)
    {
        cin >> k;
        cout << a[k - 1] << "\n";
    }

    return 0;
}