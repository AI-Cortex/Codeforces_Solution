// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Polycarp and Coins
// Link: https://codeforces.com/problemset/problem/1551/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int one, two, n;
    while (t--)
    {
        cin >> n;
        one = two = n / 3;
        switch (n % 3)
        {
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        }
        cout << one << " " << two << endl;
    }

    return 0;
}