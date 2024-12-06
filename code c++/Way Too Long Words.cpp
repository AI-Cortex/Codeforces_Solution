// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Way Too Long Words
// link : https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string s;
        cin>>s;
        int len = s.length();
        if(len>10){
            cout << s[0] << len - 2 << s[len - 1] << '\n';
        }
        else
            cout << s << '\n';
    }
    return 0;
}