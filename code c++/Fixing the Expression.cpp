// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Fixing the Expression
// link : https://codeforces.com/problemset/problem/2038/N

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    char s[4];
    int a, b;
    char c;

    for (int i = 0; i < t; i++){
        cin >> s;
        a = s[0] - '0';
        c = s[1];
        b = s[2] - '0';

        if(c=='<' && a<b)
            cout << s << '\n';

        else if(c == '>' && a>b)
            cout << s << '\n';
        
        else if(c=='='&& a==b)
            cout << s << '\n';
        else{
            if(a>b)
                cout << a << '>' << b << "\n";
            else if(a<b)
                cout << a << '<' << b << "\n";
            else
                cout << a << '=' << b << "\n";
        }

    }

        return 0;
}