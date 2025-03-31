// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Compote
// link : https://codeforces.com/problemset/problem/746/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m = min({a, b / 2, c / 4});
    cout << m + m * 2 + m * 4;
    return 0;
}
