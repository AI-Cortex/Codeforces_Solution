// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Elephant
// link : https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t = ((n%5)>0) + (n/5);
    cout << t;

    return 0;
}