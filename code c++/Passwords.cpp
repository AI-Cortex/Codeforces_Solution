// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Passwords
// link : https://codeforces.com/problemset/problem/721/B

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;
    int n, k;
    cin >> n >> k;

    string s;
    while (n--)
    {
        cin >> s;
        m[s.size()]++;
    }
    cin >> s;
    int min_t = 0, max_t = 0;
    for (auto p : m)
    {
        if (p.first < s.size())
            min_t += p.second;
        else
            break;
    }
    max_t = m[s.size()] + min_t;
    cout << 1 + min_t + min_t / k * 5 << " " << max_t + (max_t - 1) / k * 5 << endl;

    return 0;
}
