// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Watermelon
// link : https://codeforces.com/problemset/problem/4/A 
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    if(n<=2 || n%2==1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}