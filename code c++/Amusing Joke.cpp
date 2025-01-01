// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Amusing Joke
// Link: https://codeforces.com/problemset/problem/141/A

#include <iostream>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    s1 += s2;

    char a[26] = {0};

    for (auto s : s3)
        a[s - 'A']++;

    for (auto s : s1)
        a[s - 'A']--;

    for (auto n : a)
        if (n != 0)
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";

    return 0;
}