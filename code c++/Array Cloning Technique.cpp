// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Array Cloning Technique
// link : https://codeforces.com/problemset/problem/1665/B

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findMaxFrequency(const vector<int> &a)
{
    unordered_map<int, int> freq;
    int maxFreq = 0;
    for (int num : a)
    {
        freq[num]++;
        if (freq[num] > maxFreq)
            maxFreq = freq[num];
    }
    return maxFreq;
}

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int r = findMaxFrequency(v);
        n -= r;
        int op = 0;

        while (n)
        {
            op += min(r, n) + 1;
            n -= min(r, n);
            r *= 2;
        }
        cout << op << "\n";
    }

    return 0;
}
