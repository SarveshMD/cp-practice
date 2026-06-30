#include <bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string> &wordDict)
{
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[n] = true;

    for (int i = n - 1; i >= 0; i--)
    {
        for (string word : wordDict)
        {
            int l = word.size();
            if (s.substr(i, l) == word)
            {
                dp[i] = dp[i + l];
            }
            if (dp[i])
                break;
        }
    }
    return dp[0];
}

int main()
{
    string s = "abcd";
    vector<string> wordDict = {"a", "abc", "b", "cd"};
    cout << wordBreak(s, wordDict);
}