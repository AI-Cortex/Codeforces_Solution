// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Beautiful Year
// link : https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include <set>
using namespace std;

int f(int n){
    set <int> s;
    while(n){
        s.insert(n%10);
        n/=10;
    }
    if(s.size() == 4)
        return 1;
    return 0;
}

int main(){
    int n;
    cin >> n;
    
    while(true){
        n++;
        if(f(n))
            break;
    }
    cout<<n;
    return 0;
}