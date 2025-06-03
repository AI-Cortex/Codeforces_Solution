// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Football
// link : https://codeforces.com/problemset/problem/96/A

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
