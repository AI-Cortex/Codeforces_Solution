// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Magnets
// Link: https://codeforces.com/problemset/problem/344/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    int t = 1;

    cin>>b;
    n--;

    while(n--){
        cin >> a;
        if(a!=b){
            b = a;
            t++;
        }
    }
    cout<<t;

    return 0;
}