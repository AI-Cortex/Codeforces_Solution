// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Vanya and Cubes
// Link: https://codeforces.com/problemset/problem/492/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, i = 1, last = 0;
    while (true)
    {
        sum += last + i;
        if (sum > n)
        {
            i--;
            break;
        }
        else if (sum == n)
            break;

        last += i;
        i++;
    }
    cout << i << endl;

    return 0;
}