// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Word on the Paper
// Link: https://codeforces.com/problemset/problem/1850/C

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string word;
    while (t--)
    {
        string s;
        int index = -1;
        for (int i = 0; i < 8; i++)
        {
            cin >> s;
            if (index == -1)
                for (size_t j = 0; j < s.size(); j++)
                    if (s[j] != '.')
                    {
                        index = j;
                        break;
                    }

            if (index != -1 && index != 10)
            {
                if (s[index] == '.')

                    index = 10;

                else
                    word += s[index];
            }
        }
        word += "\n";
    }
    cout << word;

    return 0;
}