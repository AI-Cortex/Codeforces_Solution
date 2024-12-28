// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Anton and Polyhedrons
// Link: https://codeforces.com/problemset/problem/785/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    string s;
    while(n--) {
        cin >> s;
        if(s=="Tetrahedron")
            count += 4;
        else if(s=="Cube")
            count += 6;
        else if(s=="Octahedron")
            count += 8;
        else if(s=="Dodecahedron")
            count += 12;
        else if(s=="Icosahedron")
            count += 20;
        
    }

    cout << count << endl;
    return 0;
}