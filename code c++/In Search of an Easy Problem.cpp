// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: In Search of an Easy Problem
// Link: https://codeforces.com/problemset/problem/1030/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a){
            cout << "HARD";
            return 0;
        }

    }
    cout <<  "EASY";
    return 0;
}