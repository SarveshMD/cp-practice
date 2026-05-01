#include <bits/stdc++.h>
using namespace std;

string sortVowels(string s)
{
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    unordered_map<char, int> counts;
    unordered_map<char, int> first_pos;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (vowels.contains(c))
        {
            counts[c]++;
            if (!first_pos.contains(c))
            {
                first_pos[c] = i;
            }
        }
    }

    vector<pair<char, int>> counts_vec(counts.begin(), counts.end());

    sort(counts_vec.begin(), counts_vec.end(), [&first_pos](auto &a, auto &b)
         {
        if (a.second > b.second) {
            return true;
        }
        else if (a.second == b.second) {
            return (first_pos[a.first] < first_pos[b.first]);
        }
        else {
            return false;
        } });

    for (auto &a : counts_vec)
    {
        cout << a.first << " " << a.second << endl;
    }

    int curr_index = 0;
    string out_string = "";
    for (auto &c : s)
    {
        if (vowels.contains(c))
        {
            if (counts_vec[curr_index].second == 0)
                curr_index++;
            out_string += counts_vec[curr_index].first;
            counts_vec[curr_index].second--;
        }
        else
        {
            out_string += c;
        }
    }
    return out_string;
}

int main()
{
    cout << sortVowels("baeiou") << endl;
}