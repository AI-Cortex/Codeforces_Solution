// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Wrong Subtraction
// link : https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        if (n % 10 == 0){
            n /= 10;
        }else{
            n--;
        }
    }
    cout << n << endl;
}