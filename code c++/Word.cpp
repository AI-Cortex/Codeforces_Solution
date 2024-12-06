// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Word
// link : https://codeforces.com/problemset/problem/59/A

#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int up = 0;
    int low = 0;

    for (int i = 0; i < s.length(); i++){
        if(isupper(s[i]))
            up++;
        else
            low++;
    }

    if (up > low) {
        for (char &c : s) 
            c = toupper(c);
    } else {
        for (char &c : s) 
            c = tolower(c);
    }

    cout << s << endl;

    return 0;
}