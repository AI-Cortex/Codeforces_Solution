// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : A and B and Chess
// link : https://codeforces.com/problemset/problem/519/A

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int w = 0, b = 0;
    char ch;

    map<char, int> d{{'p', 1}, {'q', 9}, {'r', 5}, {'b', 3}, {'n', 3}, {'k', 0}};

    for (int i = 0; i < 64; i++)
    {
        cin >> ch;
        if (ch == '.')
            continue;
        if ('a' <= ch && ch < 'z')
            b += d[ch];
        else
            w += d[ch + 32];
    }
    if (w > b)
        cout << "White";
    else if (b > w)
        cout << "Black";
    else
        cout << "Draw";

    return 0;
}
