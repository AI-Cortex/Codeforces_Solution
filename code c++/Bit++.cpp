// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Bit++
// link : https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    int x = 0;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        if(s[1] == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}