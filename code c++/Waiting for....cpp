// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Waiting for...
// link : https://codeforces.com/problemset/problem/2038/J

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int p = 0, n;
    char c;
    for (int i = 0; i < t; i++){
        cin >> c >> n;
        if (c == 'P'){
            p+=n;
        }
        else{
            if (p < n){
                cout << "YES" << endl;
                p = 0;
            }
            else{
                p-=n;
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}