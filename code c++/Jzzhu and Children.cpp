// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Jzzhu and Children
// link : https://codeforces.com/problemset/problem/450/A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int index = -1, value = 1;
    double x;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        if (ceil(x / m) >= value)
        {
            value = ceil(x / m);
            index = i;
        }
    }
    if (index == -1)
        index = n - 1;
    cout << index + 1 << endl;
    return 0;
}
