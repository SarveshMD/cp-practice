#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    if (n > m)
        return false;
    unordered_map<char, int> s1_counts;
    unordered_map<char, int> s2_counts;
    for (char c : s1)
    {
        s1_counts[c]++;
    }
    for (int i = 0; i < n; i++)
    {
        s2_counts[s2[i]]++;
    }

    for (int l = 0; l <= m - n; l++)
    {
        if (s1_counts == s2_counts)
            return true;
        if (l == m - n)
            break;
        s2_counts[s2[l]]--;
        if (s2_counts[s2[l]] == 0)
            s2_counts.erase(s2[l]);
        s2_counts[s2[l + n]]++;
    }
    return false;
}

bool checkInclusionOptimized(string s1, string s2)
// we don't compare the two hash tables in every iteration in this solution - use matches
{
    int n = s1.size();
    int m = s2.size();
    if (n > m)
        return false;
    vector<int> s1_counts(26);
    vector<int> s2_counts(26);
    for (char c : s1)
    {
        s1_counts[c - 'a']++;
    }
    for (int i = 0; i < n; i++)
    {
        s2_counts[s2[i] - 'a']++;
    }
    int matches = 0;
    for (int i = 0; i < 26; i++)
    {
        if (s1_counts[i] == s2_counts[i])
            matches++;
    }
    for (int l = 0; l <= m - n; l++)
    {
        if (matches == 26)
            return true;
        if (l == m - n)
            break;
        int c = s2[l] - 'a';
        if (s1_counts[c] == s2_counts[c])
            matches--;
        s2_counts[c]--;
        if (s1_counts[c] == s2_counts[c])
            matches++;
        c = s2[l + n] - 'a';
        if (s1_counts[c] == s2_counts[c])
            matches--;
        s2_counts[c]++;
        if (s1_counts[c] == s2_counts[c])
            matches++;
    }
    return false;
}

int main()
{
    string s1 = "abc";
    string s2 = "lecabee";
    bool ans = checkInclusion(s1, s2);
    cout << (ans ? "YES" : "NO") << endl;
}