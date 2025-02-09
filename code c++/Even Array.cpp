// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Even Array
// Link: https://codeforces.com/problemset/problem/1367/B

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
        int even = 0, odd = 0, k = 0;
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num % 2 == 0)
                even++;
            else
                odd++;
            if (num % 2 != i % 2)
                k++;
        }
        int count = 0;
        if (k > 0)
        {
            if (n % 2)
            {
                if (even -1 == odd)
                    count = k / 2 + k % 2;
                else
                    count = -1;
            }
            else
            {
                if (odd == even)
                    count = k / 2;
                else
                    count = -1;
            }
        }
        cout << count << endl;
    }

    return 0;
}