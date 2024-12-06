// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Helpful Maths
// link : https://codeforces.com/problemset/problem/339/A

#include <iostream>
using namespace std;

int main(){
    string s;
    
    int a[3] = {0, 0, 0};
    int index;

    cin >> s;

    for (int i = 0; i < s.length(); i+=2){
        index = s[i] - '0' - 1;
        a[index]++;
    }
    string out = "";
    for (int i = 0; i < 3; i++){
        while(a[i]--){
            out += to_string(i+1) + "+";
        }
    }

    cout << out.substr(0, out.length()-1);
    return 0;
}