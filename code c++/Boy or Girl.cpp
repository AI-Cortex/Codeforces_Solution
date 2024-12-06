// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Boy or Girl
// link : https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    cin >> s;

    set<char> st;
    for (int i = 0; i < s.length(); i++){
        st.insert(s[i]);
    }
    int len = st.size();
    if(len&1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}