// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Team
// link : https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int n = 0;
    int a, b, c;
    for (int i=0 ; i<t ; i++){
        cin >> a >> b >> c;
        if (a+b+c>=2){
            n++;
        }
    }
    cout << n;
    return 0;    
}