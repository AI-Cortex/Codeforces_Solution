// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sereja and Dima
// Link: https://codeforces.com/problemset/problem/381/A

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sereja_score = 0, dima_score = 0;
    bool turn = true;
    int card;
    while (!a.empty())
    {
        if (a.front() > a.back())
        {
            card = a.front();
            a.pop_front();
        }
        else
        {
            card = a.back();
            a.pop_back();
        }

        if (turn)
        {
            sereja_score += card;
        }
        else
        {
            dima_score += card;
        }
        turn = !turn;
    }
    cout << sereja_score << " " << dima_score << endl;

    return 0;
}