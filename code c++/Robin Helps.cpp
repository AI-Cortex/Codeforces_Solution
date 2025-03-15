// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Robin Helps
// Link: https://codeforces.com/problemset/problem/2014/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, k, num;

    while (t--)
    {
        cin >> n >> k;
        int gold = 0;
        int help = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num >= k)
                gold += num;
            else if (num == 0 && gold){
                gold--;
                help++;
            }
                
        }
        cout << help << endl;
    }

    return 0;
}