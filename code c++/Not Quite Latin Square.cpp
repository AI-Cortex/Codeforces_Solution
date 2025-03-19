// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Not Quite Latin Square
// Link: https://codeforces.com/problemset/problem/1915/B

#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;
    const string str = "ABC";
    string s;

    while (t--)
    {
        for (int k = 0; k < 3; k++)
        {
            cin >> s;
            if (s.find('?') != string::npos)
            {
                for (auto ch : str)
                    if (s.find(ch) == string::npos)
                    {
                        cout << ch << endl;
                        break;
                    }
            }
        }
    }
    return 0;
}