// NeetCode150: Palindrome Partitioning
// Backtracking, Medium

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string &s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void fill_substrings(string &s, vector<vector<string>> &substrings, vector<string> &curr, int idx)
{
    if (idx >= s.size())
    {
        substrings.push_back(curr);
        return;
    }
    for (int i = idx; i < s.size(); i++)
    {
        if (isPalindrome(s, idx, i))
        {
            curr.push_back(s.substr(idx, i - idx + 1));
            fill_substrings(s, substrings, curr, i + 1);
            curr.pop_back();
        }
    }
}

int main()
{
    string s = "aab";

    vector<vector<string>> substrings;
    vector<string> curr;

    fill_substrings(s, substrings, curr, 0);

    for (auto grp : substrings)
    {
        for (string substr : grp)
        {
            cout << substr << " ";
        }
        cout << endl;
    }
}
