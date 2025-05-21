// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Godsend
// link : https://codeforces.com/problemset/problem/841/B

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num & 1)
        {
            cout << "First";
            return 0;
        }
    }
    cout << "Second";
    return 0;
}
