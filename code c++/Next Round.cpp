// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Next Round
// link : https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include<vector>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    int num = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int score = v[k - 1];

    for (int i = 0; i < n; i++){
        if(v[i]>= score && v[i]>0)
            num++;
        else
            break;
    }


    cout << num;
    return 0;
}