// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Codeforces Checking
// Link: https://codeforces.com/problemset/problem/1791/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char ch;
    string s = "codefrs";
    while (t--)
    {
        cin >> ch;
        if (s.find(ch) != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}