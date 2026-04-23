#include <bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string> &wordDict)
{
    int n = s.size();
    vector<bool> dp(n + 1);
    dp[n] = true;
    for (int i = n - 1; i >= 0; i--)
    {
        for (string word : wordDict)
        {
            if ((s.substr(i, word.size()) == word) && (dp[i + word.size()]))
            {
                dp[i] = true;
            }
        }
    }
    return dp[0];
}

int main()
{
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    cout << (wordBreak(s, wordDict) ? "YES" : "NO") << endl;
    s = "applepenapple";
    wordDict = {"apple", "pen"};
    cout << (wordBreak(s, wordDict) ? "YES" : "NO") << endl;
    s = "catsandog";
    wordDict = {"cats", "dog", "sand", "and", "cat"};
    cout << (wordBreak(s, wordDict) ? "YES" : "NO") << endl;
}