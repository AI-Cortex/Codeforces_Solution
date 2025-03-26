// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// Name: Army
// Link: https://codeforces.com/problemset/problem/38/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a - 1; i < b - 1; i++)
        sum += arr[i];
    cout << sum << endl;
    return 0;
}