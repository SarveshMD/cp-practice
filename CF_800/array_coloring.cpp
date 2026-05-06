// 2191A. Array Coloring

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> pairs;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pairs.push_back(pair<int, int>(a, i % 2));
        }
        sort(pairs.begin(), pairs.end(), [](auto a, auto b)
             { return a.first < b.first; });
        int prev = pairs[0].second;
        bool no = false;
        for (int i = 1; i < n; i++)
        {
            if (prev == pairs[i].second)
            {
                no = true;
                break;
            }
            prev = pairs[i].second;
        }
        cout << (no ? "NO" : "YES") << endl;
    }
}