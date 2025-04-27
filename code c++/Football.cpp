// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Football
// link : https://codeforces.com/problemset/problem/43/A

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }

    string winner;
    int max_goals = 0;

    for (const auto &pair : m)
    {
        if (pair.second > max_goals)
        {
            max_goals = pair.second;
            winner = pair.first;
        }
    }

    cout << winner << endl;
    return 0;
}
