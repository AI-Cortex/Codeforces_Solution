// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/Codeforces_Solution
//////////////////////////////////////////////////////////////////////
// name : ABC String
// link : https://codeforces.com/problemset/problem/1494/A
#include <iostream>
#include <map>
using namespace std;

// Function to check if the mapped string is a valid bracket sequence
bool isValidBracketSequence(const string &s, const map<char, char> &mapping)
{
    int balance = 0;
    for (char ch : s)
    {
        if (mapping.at(ch) == '(')
            balance++;
        else
        {
            balance--;
            if (balance < 0)
                return false; // More closing brackets than opening ones
        }
    }
    return balance == 0; // Valid if all opened brackets are properly closed
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        // If the first and last characters are the same, it's impossible
        if (s.front() == s.back())
        {
            cout << "NO\n";
            continue;
        }

        // Find the third character (different from the first and last)
        char third_char;
        for (char ch : {'A', 'B', 'C'})
        {
            if (ch != s.front() && ch != s.back())
            {
                third_char = ch;
                break;
            }
        }

        // First mapping: map third character to '('
        map<char, char> mapping1 = {
            {s.front(), '('},
            {s.back(), ')'},
            {third_char, '('}};

        // Second mapping: map third character to ')'
        map<char, char> mapping2 = {
            {s.front(), '('},
            {s.back(), ')'},
            {third_char, ')'}};

        // If any mapping leads to a valid bracket sequence, output YES
        if (isValidBracketSequence(s, mapping1) || isValidBracketSequence(s, mapping2))
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}
