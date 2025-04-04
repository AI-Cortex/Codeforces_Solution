// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Contest
// link : https://codeforces.com/problemset/problem/501/A

#include <iostream>
using namespace std;

int calculate(int p, int t)
{
    return max(3 * p / 10, p - p / 250 * t);
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int Misha = calculate(a, c);
    int Vasya = calculate(b, d);
    if (Misha > Vasya)
        cout << "Misha" << endl;
    else if (Misha < Vasya)
        cout << "Vasya" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}
