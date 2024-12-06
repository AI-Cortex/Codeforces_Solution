// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Petya and Strings
// link : https://codeforces.com/problemset/problem/112/A

#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = 0;
    for (int i = 0; i < s1.length(); i++){
        if(tolower(s1[i]) == tolower(s2[i]))
            continue;
        if(tolower(s1[i]) > tolower(s2[i]))
            n = 1;
        else 
            n=-1;
        break;
    }
    cout << n;
    return 0;
}