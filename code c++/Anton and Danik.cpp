// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Anton and Danik
// link : https://codeforces.com/problemset/problem/734/A

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0, d=0;
    for(int i=0; i<n ; i++){
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d){
        cout << "Anton";
    }
    else if(d>a){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }

    return 0;
}