// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Brain's Photos
// Link: https://codeforces.com/problemset/problem/707/A

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    char ch;
    for (int i = 0; i < r * c; i++)
    {
        cin >> ch;
        if (ch == 'C' || ch == 'M' || ch == 'Y')
        {
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";

    return 0;
}