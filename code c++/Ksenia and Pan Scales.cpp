// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Ksenia and Pan Scales
// link : https://codeforces.com/problemset/problem/382/A

#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int l = s1.find('|');

    int left = l;
    int right = s1.size() - l - 1;
    int remaining = s2.size() - abs(left - right);
    if (remaining < 0 || remaining % 2 == 1)
        cout << "Impossible";
    else
    {
        int n = (left + right + s2.size()) / 2;
        cout << s1.substr(0, left) + s2.substr(0, n - left) << '|' << s1.substr(l + 1) + s2.substr(n - left);
    }

    return 0;
}
