// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Calculating Function
// Link: https://codeforces.com/problemset/problem/486/A


#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if(n&1){
        cout<<-n/2 - 1  ;
    }
    else{
        cout << n/2;
    }
    return 0;
}