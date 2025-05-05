// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Move Brackets
// link : https://codeforces.com/problemset/problem/1374/C

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n >> s;
        int open = 0;
        for (auto ch : s)
        {
            if (ch == '(')
                open++;

            else if (open > 0)
                open--;
        }
        cout << open << endl;
    }
    return 0;
}
