// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Hulk
// Link: https://codeforces.com/problemset/problem/705/A


#include <iostream>
using namespace std;

int main() {
    string s = "";
    string s1 = "I hate that";
    string s2 = "I love that";
    int n;
    cin >> n;
    for(int i=0 ; i<n-1 ; i++){
        if(i%2==0)
            s += s1 + " ";
        else
            s += s2 + " ";
    }
    if(n%2==1)
        s += "I hate it";
    else
        s += "I love it";

    cout<<s;

    return 0;
}