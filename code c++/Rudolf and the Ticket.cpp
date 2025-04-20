// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Rudolf and the Ticket
// link : https://codeforces.com/problemset/problem/1941/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findNextGreaterIndex(const vector<int> &arr, int target)
{
    auto it = upper_bound(arr.begin(), arr.end(), target);

    if (it == arr.end())
        return arr.size();
    return it - arr.begin();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a_len, b_len, k;
        cin >> a_len >> b_len >> k;

        vector<int> a(a_len), b(b_len);
        for (int i = 0; i < a_len; i++)
            cin >> a[i];

        for (int i = 0; i < b_len; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int n = 0;
        for (auto num : a)
        {
            if (num >= k)
                break;
            n += findNextGreaterIndex(b, k - num);
        }
        cout << n << "\n";
    }

    return 0;
}
