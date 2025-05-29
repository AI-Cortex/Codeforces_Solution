// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Luxurious Houses
// link : https://codeforces.com/problemset/problem/581/B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> houses(n);
    for (int i = 0; i < n; ++i)
        cin >> houses[i];

    int max_houses = 0;
    for (auto h = houses.rbegin(); h != houses.rend(); ++h)
    {
        int current = *h;

        if (*h <= max_houses)
            *h = max_houses - *h + 1;
        else
            *h = 0;

        max_houses = max(current, max_houses);
    }
    for (auto n : houses)
        cout << n << " ";

    return 0;
}
