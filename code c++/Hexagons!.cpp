// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Hexagons!
// link : https://codeforces.com/problemset/problem/630/D

#include <iostream>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;
    cout << (n * (n + 1)*3) + 1 << endl;
    return 0;
}
