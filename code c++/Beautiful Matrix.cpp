// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Beautiful Matrix
// link : https://codeforces.com/problemset/problem/263/A


#include <iostream>
using namespace std;

int main() {
    int x, y;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int a;
            cin >> a;
            if (a == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 3) + abs(y - 3) << endl;
    return 0;
}