// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Olesya and Rodion
// link : https://codeforces.com/problemset/problem/584/A

#include <iostream>
using namespace std;

int main()
{
    int n, t;

    string s;

    cin >> n >> t;
    if (n == 1 && t == 10)
        s = "-1";
        
    else if (t != 10)
        s.assign(n, char(t + '0'));

    else
    {
        s.assign(n - 1, '1');
        s += '0';
    }
    cout << s;
    return 0;
}
