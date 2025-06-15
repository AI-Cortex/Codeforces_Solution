// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Vus the Cossack and a Contest
// link : https://codeforces.com/problemset/problem/1186/A

#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (n <= min(m, k))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
