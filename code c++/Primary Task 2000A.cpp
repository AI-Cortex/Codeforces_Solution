// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Primary Task
// link : https://codeforces.com/problemset/problem/2000/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() < 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            int a = stoi(s.substr(0, 2));
            int b = stoi(s.substr(2));
            if (a != 10 || b < 2 || s[2] == '0')
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
        }
    }
}