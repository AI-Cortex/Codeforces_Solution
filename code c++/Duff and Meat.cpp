// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Duff and Meat
// link : https://codeforces.com/problemset/problem/588/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, p;
    int total = 0;
    int min_cost = 1000;
    while (n--)
    {
        cin >> a >> p;
        if (p < min_cost)
            min_cost = p;

        total += a * min_cost;
    }
    cout << total << endl;

    return 0;
}
