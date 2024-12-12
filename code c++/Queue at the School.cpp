// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Queue at the School
// Link: https://codeforces.com/problemset/problem/266/B

#include <iostream>
using namespace std;

int main(){
    int n, t;
    string s;
    cin >> n >> t >> s ;

    while(t--){
        for(int i=0; i<n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}
