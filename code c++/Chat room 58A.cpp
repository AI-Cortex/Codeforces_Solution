// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Chat room
// link : https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    string s;
    cin >> s;
    regex re("h.*e.*l.*l.*o");
    if (regex_search(s, re))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
