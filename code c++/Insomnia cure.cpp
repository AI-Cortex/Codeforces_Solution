// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Insomnia cure
// Link: https://codeforces.com/problemset/problem/148/A


#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;
    int t = n;
    for(int i=1; i<=n ; i++){
        if(i%a>0 && i%b>0 && i%c>0 && i%d>0)
            t--;
    }
    cout << t;
    return 0;
}