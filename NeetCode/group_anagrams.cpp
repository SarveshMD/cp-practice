#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<vector<int>, vector<string>> solMap;
    for (string &str : strs)
    {
        vector<int> hashmap(26, 0);
        for (char c : str)
        {
            hashmap[c - 'a']++;
        }
        solMap[hashmap].push_back(str);
    }
    vector<vector<string>> answer;
    for (auto &pr : solMap)
    {
        answer.push_back(pr.second);
    }
    return answer;
}

int main()
{
    vector<string> strs = {"act", "pots", "tops", "cat", "stop", "hat"};
    vector<vector<string>> grouped = groupAnagrams(strs);
    for (vector<string> &grp : grouped)
    {
        for (string &anagram : grp)
        {
            cout << anagram << " ";
        }
        cout << endl;
    }
}
