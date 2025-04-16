// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Buttons
// link : https://codeforces.com/problemset/problem/1858/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int first, second, c;
    while (t--)
    {
        cin >> first >> second >> c;
        first += (c + 1) / 2;
        second += c / 2;
        cout << (first > second ? "First\n" : "Second\n");
    }

    return 0;
}
