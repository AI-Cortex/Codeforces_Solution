// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Stones on the Table
// link : https://codeforces.com/problemset/problem/266/A

#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    char c = s[0];
    int t = 0;
    for (int i = 1; i<s.length(); i++){
        if(s[i] == c)
            t++;
        else
        {
            c = s[i];
        }
        
    }
    cout << t;

    return 0;
}