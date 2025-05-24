// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Nearest Minimums
// link : https://codeforces.com/problemset/problem/911/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int _min = 1e9 + 1;
    int min_indx = -1;
    int ans = n + 1;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num < _min)
        {
            _min = num;
            min_indx = i;
            ans = n;
        }
        else if (num == _min)
        {
            ans = min(ans, i - min_indx);
            min_indx = i;
        }
    }
    cout << ans << endl;

    return 0;
}