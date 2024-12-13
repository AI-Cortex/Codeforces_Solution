// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : George and Accommodation
// link : https://codeforces.com/problemset/problem/467/A

# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t = 0;
    int a, b;
    while (n--){
        cin >> a >> b;
        if(b-a-2 > -1)
            t++;
    }
    cout<<t;

    return 0;
}