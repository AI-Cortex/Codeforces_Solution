// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Clock Conversion
// link : https://codeforces.com/problemset/problem/1950/C

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int h = stoi(s.substr(0, 2));
        string mm = s.substr(3, 2);
        string period, hh;

        if (h == 0)
        {
            hh = "12";
            period = "AM";
        }
        else if (h < 12)
        {
            hh = s.substr(0, 2);
            period = "AM";
        }
        else if (h == 12)
        {
            hh = "12";
            period = "PM";
        }
        else
        {
            int h12 = h - 12;
            hh = (h12 < 10 ? "0" : "") + to_string(h12);
            period = "PM";
        }

        cout << hh << ":" << mm << " " << period << '\n';
    }

    return 0;
}
