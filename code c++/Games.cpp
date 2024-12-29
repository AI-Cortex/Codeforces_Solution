// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Games
// Link: https://codeforces.com/problemset/problem/268/A

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];

    int t = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i == j) 
                continue;
            else if (a[i][0] == a[j][1])
                t++;

    cout << t << endl;

    return 0;
}