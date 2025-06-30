// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Goals of Victory
// link : https://codeforces.com/problemset/problem/1877/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num, sum(0);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            sum += num;
        }
        cout << -sum << endl;
    }

    return 0;
}
