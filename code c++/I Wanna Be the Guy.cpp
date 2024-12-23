// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: I Wanna Be the Guy
// Link: https://codeforces.com/problemset/problem/469/A


#include <iostream>
#include <set>
using namespace std;

void f(set<int> &levels){
    int n, level;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> level;
        levels.insert(level);
    }
}

int main() {
    int n;
    cin>>n;

    set<int> levels;
    int level;

    f(levels);
    f(levels);

    if(levels.size() == n){
        cout << "I become the guy.";
    }
    else 
        cout <<"Oh, my keyboard!";

    return 0;
}