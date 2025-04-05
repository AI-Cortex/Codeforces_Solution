// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Cookies
// link : https://codeforces.com/problemset/problem/129/A

#include <iostream>
using namespace std;

int main()
{
    int n, num;
    int odd = 0, even = 0;
    cin >> n;
    while (n--)
    {
        cin >> num;
        (num % 2 ? odd : even)++;
    }
    cout << ((odd % 2) ? odd : even);
    return 0;
}
