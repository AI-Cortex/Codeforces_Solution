// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Boys and Girls
// link : https://codeforces.com/problemset/problem/253/A

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    int b, g;
    in >> b >> g;

    char more = (b >= g) ? 'B' : 'G';
    char less = (b >= g) ? 'G' : 'B';
    int moreCount = max(b, g);
    int lessCount = min(b, g);

    string s(moreCount + lessCount, more);
    for (int i = 0; i < lessCount; ++i)
        s[i * 2 + 1] = less;

    out << s;
    return 0;
}
