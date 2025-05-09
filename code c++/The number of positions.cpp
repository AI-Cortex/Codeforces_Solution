// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : The number of positions
// link : https://codeforces.com/problemset/problem/124/A

#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    n -= a;
    cout << min(n, b + 1) << endl;
    return 0;
}
