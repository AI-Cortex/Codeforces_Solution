// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Soldier and Bananas
// link : https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

int main(){
    int dollar, bnana, cost;
    cin >> cost >> dollar >> bnana;

    int totalCost = cost * bnana * (bnana + 1) / 2;

    int borrow = totalCost - dollar;

    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow << endl;

    return 0;
}