// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Fox And Snake
// Link: https://codeforces.com/problemset/problem/510/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> v;

    bool t = true;

    for (int i = 0; i < r; i++)
    {
        if (i % 2==0)
        {
            vector<char> v1(c, '#');
            v.push_back(v1);
        }
        else
        {
            vector<char> v1(c, '.');

            if (t)
                v1[c - 1] = '#';
            else
                v1[0] = '#';
            v.push_back(v1);
            t = !t;
        }
    }
    for (auto &vec : v)
    {
        for (auto &ch : vec)
            cout << ch;
        cout << '\n';
    }

    return 0;
}