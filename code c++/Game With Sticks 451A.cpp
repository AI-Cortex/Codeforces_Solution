// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Game With Sticks
// link : https://codeforces.com/problemset/problem/451/A

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    a = min(a, b);
    if (a % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
    return 0;
}
