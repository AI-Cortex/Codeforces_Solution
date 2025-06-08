// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : HQ9+
// link : https://codeforces.com/problemset/problem/133/A

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto ch : s)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
