// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Ultra-Fast Mathematician
// Link: https://codeforces.com/problemset/problem/61/A

#include <iostream>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2;
    s3 = s1;

    int n = s1.size();

    while (--n > -1)
    {
        s3[n] = (s1[n] == s2[n]) ? '0' : '1';
    }
    cout << s3;

    return 0;
}