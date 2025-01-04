// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Pangram
// Link: https://codeforces.com/problemset/problem/520/A


#include <iostream>
using namespace std;

int main() {
    int a [26] = {0};
    int len, index;
    string s;
    cin >> len >> s;
    for(int i = 0; i < len; i++){
        index = tolower(s[i]);
        a[index-'a'] = 1;
    }
    for(int i = 0; i < 26; i++)
        if(a[i] == 0) 
            return cout << "NO", 0;
    cout << "YES";
    return 0;
}