// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Minimum Varied Number
// link : https://codeforces.com/problemset/problem/1714/C

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum, t = 9;
        string s;
        cin >> sum;
        while (sum > 0)
        {
            s = to_string(min(sum, t)) + s;
            t = min(t, sum);
            sum -= min(sum, t);
            t--;
        }
        cout << s << endl;
    }
    return 0;
}
