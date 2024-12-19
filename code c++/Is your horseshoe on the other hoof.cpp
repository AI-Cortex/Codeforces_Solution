// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Is your horseshoe on the other hoof?
// Link: https://codeforces.com/problemset/problem/228/A


#include <iostream>
#include <set>
using namespace std;

int main() {
    int n = 4;
    int a;
    set <int> s;
    while(n--){
        cin >> a;
        s.insert(a);
    }
    cout<< 4 - s.size() << endl;
    return 0;
}