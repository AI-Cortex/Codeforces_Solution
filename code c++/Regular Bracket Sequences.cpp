// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Regular Bracket Sequences
// link : https://codeforces.com/problemset/problem/1574/A

#include <iostream>
using namespace std;

void f(string s, int open, int close, int &i, int n)
{
    if (i == n)
        return;
    if (open == 0 && close == 0)
    {
        cout << s << endl;
        i++;
        return;
    }
    if (open > 0)
        f(s + '(', open - 1, close, i, n);
    if (close > open)
        f(s + ')', open, close - 1, i, n);
}

void f1(string s, int n)
{
    for (int i = 0; i < n; i++)
        s += "()";
    cout << s << endl;

    for (int i = 1; i < n; i++)
    {
        swap(s[i], s[2 * n - i - 1]);
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    string s;
    int n;
    while (t--)
    {
        cin >> n;
        // int open = n, close = n, i = 0;
        // f("", open, close, i, n);
        f1("", n);
    }
    return 0;
}
