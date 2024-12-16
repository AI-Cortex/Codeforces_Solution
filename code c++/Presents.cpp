// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Presents
// Link: https://codeforces.com/problemset/problem/136/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int index;

    for(int i=0 ; i<n ; i++){
        cin >> index;
        a[index-1] = i+1;
    }

    for(int i=0; i<n ; i++)
        cout << a[i] << " ";
            
    return 0;
}