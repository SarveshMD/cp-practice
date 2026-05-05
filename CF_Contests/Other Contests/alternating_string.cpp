// 2225B. Alternating String

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> mask(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                mask[i] = ('a' == s[i]);
            }
            else
            {
                mask[i] = ('b' == s[i]);
            }
        }
        int n_of_breaks = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (mask[i] != mask[i + 1])
                n_of_breaks++;
        }
        cout << ((n_of_breaks <= 2) ? "YES" : "NO") << endl;
    }
}