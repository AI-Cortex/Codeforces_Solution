// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Distinct Digits
// link : https://codeforces.com/problemset/problem/1228/A

#include <iostream>
#include <set>
#include <cmath>
using namespace std;

bool f(int n)
{
    set<int> st;
    int t = log10(n) + 1;
    while (n)
    {
        st.insert(n % 10);
        n /= 10;
    }
    return st.size() == t;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (f(i))
        {
            cout << i << " ";
            return 0;
        }
    cout << "-1";
    return 0;
}
