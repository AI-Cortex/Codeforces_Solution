// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Linear Keyboard
// link : https://codeforces.com/problemset/problem/1607/A

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, word;
        cin >> s >> word;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
            mp[s[i]] = i;
        int time = 0;
        for (int i = 1; i < word.size(); i++)
            time += abs(mp[word[i]] - mp[word[i - 1]]);

        cout << time << endl;
    }
    return 0;
}
