// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Bus to Udayland
// Link: https://codeforces.com/problemset/problem/711/A

#include <iostream>
#include <vector>
using namespace std;

void show(vector<string> &v)
{
    cout << "YES\n";
    for (auto &s : v)
        cout << s << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    v.reserve(n);
    string s;
    while (n--)
    {
        cin >> s;
        v.push_back(s);
    }

    for (auto &s : v)
    {
        if (s[0] == 'O' && s[1] == 'O')
        {
            s[0] = '+';
            s[1] = '+';
            show(v);
            return 0;
        }
        else if (s[3] == 'O' && s[4] == 'O')
        {
            s[3] = '+';
            s[4] = '+';
            show(v);
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}