// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Mishka and Game
// Link: https://codeforces.com/problemset/problem/703/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka, m, chris, c;
    mishka = chris = 0;

    while (n--)
    {
        cin >> m >> c;
        if (m > c)
            mishka++;
        else if (m < c)
            chris++;
    }
    if (mishka > chris)
        cout << "Mishka";
    else if (mishka < chris)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}