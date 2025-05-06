// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Arpa’s hard exam and Mehrdad’s naive cheat
// link : https://codeforces.com/problemset/problem/742/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t = 1;
    if (n)
        switch (n % 4)
        {
        case 0:
            t = 6;
            break;
        case 1:
            t = 8;
            break;
        case 2:
            t = 4;
            break;
        case 3:
            t = 2;
            break;
        }

    cout << t << endl;
    return 0;
}
