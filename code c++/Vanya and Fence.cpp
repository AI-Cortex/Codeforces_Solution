// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Vanya and Fence
// link : https://codeforces.com/problemset/problem/677/A

#include <iostream>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int a;
    int t = n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a>h)
            t++;
    }

    cout << t;

    return 0;
}