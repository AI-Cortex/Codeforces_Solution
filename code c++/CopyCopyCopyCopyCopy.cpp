// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: CopyCopyCopyCopyCopy
// Link: https://codeforces.com/problemset/problem/1325/B

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, num;

    while (t--)
    {
        set<int> s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            s.insert(num);
        }
        cout << s.size() << endl;
    }

    return 0;
}