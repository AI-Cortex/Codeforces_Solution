// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Spell Check
// Link: https://codeforces.com/problemset/problem/1722/A

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    string name = "Timur";
    string s;
    while (t--)
    {
        cin >> n >> s;
        if (n != 5)
        {
            cout << "NO\n";
            continue;
        }
        map<char, int> d;
        for (auto ch : s)
            d[ch]++;
        bool flag = true;
        for (auto ch : name)
            if (d[ch] != 1)
            {
                flag=false;
                
                break;
            }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}