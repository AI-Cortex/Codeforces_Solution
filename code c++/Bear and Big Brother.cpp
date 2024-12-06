// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : Bear and Big Brother
// link : https://codeforces.com/problemset/problem/791/A

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years << endl;
    return 0;
}


