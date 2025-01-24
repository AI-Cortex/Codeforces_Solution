// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Holiday Of Equality
// Link: https://codeforces.com/problemset/problem/758/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int max_ = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        max_ = max(max_, a[i]);

    }
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += max_ - a[i];
    cout << sum << endl;
    
    return 0;
}