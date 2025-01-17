// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Lucky
// Link: https://codeforces.com/problemset/problem/1676/A


#include <iostream>
using namespace std;

int sum_digit(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(sum_digit(n%1000) == sum_digit(n/1000))
            cout <<"YES" << endl;
        else
            cout <<"NO" << endl;
    }
    return 0;
}