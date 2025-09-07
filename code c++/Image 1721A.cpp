// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Image
// link : https://codeforces.com/problemset/problem/1721/A

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        unordered_map<char, int> m;
        cin >> s1 >> s2;
        s1 += s2;
        for (auto ch : s1)
            m[ch]++;
        if (m.size() == 1)
            cout << 0 << endl;
        else if (m.size() == 2)
            cout << 1 << endl;
        else if (m.size() == 3)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}
