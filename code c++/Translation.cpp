// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Translation
// link : https://codeforces.com/problemset/problem/41/A

# include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    
    reverse(s1.begin(), s1.end());
    if(s1 == s2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
