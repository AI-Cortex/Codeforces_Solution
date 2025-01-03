// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: The New Year: Meeting Friends
// Link: https://codeforces.com/problemset/problem/723/A


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2] ;

    sort(a, a + 3);

    cout << (a[1] - a[0]) + (a[2] - a[1]);
    return 0;
}