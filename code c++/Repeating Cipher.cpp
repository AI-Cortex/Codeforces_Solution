// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Repeating Cipher
// link : https://codeforces.com/problemset/problem/1095/A

#include <iostream>
using namespace std;

int main()
{
    int len;
    string s;
    cin >> len >> s;
    int index = 0, next = 2;
    while (index < len)
    {
        cout << s[index];
        index += next;
        next++;
    }
    return 0;
}
