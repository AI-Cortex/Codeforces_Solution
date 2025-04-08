// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Little Elephant and Rozdil
// link : https://codeforces.com/problemset/problem/205/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = 1e9 + 1, index = -1;
    bool duplicate = false;
    int city;
    for (int i = 0; i < n; i++)
    {
        cin >> city;
        if (city == d)
            duplicate = 1;
        if (city < d)
        {
            d = city;
            index = i + 1;
            duplicate = false;
        }
    }
    if (duplicate)
        cout << "Still Rozdil";
    else
        cout << index;

    return 0;
}
