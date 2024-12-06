// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Word Capitalization
// link : https://codeforces.com/problemset/problem/281/A

# include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    cout << char(toupper(s[0])) +s.substr(1, s.length() - 1);

    return 0;
}