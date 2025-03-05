// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Mahmoud and Ehab and the even-odd game
// Link: https://codeforces.com/problemset/problem/959/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((n % 2 == 0) ? "Mahmoud" : "Ehab");
    return 0;
}