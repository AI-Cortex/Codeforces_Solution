// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Creating Words
// Link: https://codeforces.com/problemset/problem/1985/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a, b;
    while (t--)
    {
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
    return 0;
}