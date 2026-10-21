// https://codeforces.com/problemset/problem/1900/A
// A. Cover in Water
// Rated 800

// Time: O(n) for each test case (string find and count n(.))
// Space: O(1) for each test case (just storing the input)

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
        string surface;
        cin >> surface;
        auto it = surface.find("...");
        int res;
        if (it != string::npos)
        {
            res = 2;
        }
        else
        {
            int count = 0;
            for (char c : surface)
            {
                if (c == '.')
                    count++;
            }
            res = count;
        }
        cout << res << endl;
    }
}
