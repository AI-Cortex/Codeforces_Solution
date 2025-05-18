// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Exam
// link : https://codeforces.com/problemset/problem/534/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << 1 << "\n"
             << 1;

    else if (n == 3)
        cout << 2 << "\n"
             << "1 3";
    else if (n == 4)

        cout << 4 << "\n"
             << "3 1 4 2";

    else
    {
        cout << n << "\n";
        int a = 1, b = (n + 1) / 2 + 1;

        for (int i = 0; i < n - 1; i += 2)
            cout << a++ << " " << b++ << " ";
        if (n & 1)
            cout << a++;
    }
    return 0;
}