// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Drinks
// Link: https://codeforces.com/problemset/problem/200/B


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    int t;
    for(int i=0; i<n ; i++) {
        cin >> t;
        sum += t;
    }
    cout << sum/n;
    
    return 0;
}