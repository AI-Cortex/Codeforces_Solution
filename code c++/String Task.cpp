// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : String Task
// link : https://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string out;

    static const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for (auto ch : s)
    {
        if (vowels.count(ch) == 0)
        {
            out.push_back('.');
            out.push_back(tolower(ch));
        }
    }
    cout << out;
    return 0;
}
