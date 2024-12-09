// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Tram
// link : https://codeforces.com/problemset/problem/116/A

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int max_n=0, current_n=0;
    int input, output;

    while(n--){
        cin >> output >> input;
        
        current_n += input - output;
        max_n = max(current_n, max_n);
    }
    cout << max_n;
    return 0;
}