// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Candies and Two Sisters
// Link: https://codeforces.com/problemset/problem/1335/A


#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        if(n<3)
            cout << 0 << endl;
        else{
            if(n%2)
                cout << n/2<< endl;
            else    
                cout << n/2 -1<< endl;
        }
    }

    
    return 0;
}