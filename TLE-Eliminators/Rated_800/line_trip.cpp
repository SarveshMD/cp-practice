// https://codeforces.com/problemset/problem/1901/A
// A. Line Trip
// Rated 800

// Time: O(n) for each test case (have to get the input)
// Space: O(1) for each test case (not even storing the n input numbers)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int prev;
        cin >> prev;
        int curr;
        int max_dist = prev; // n >= 1 constraint given
        for (int i = 1; i < n; i++)
        {
            cin >> curr;
            max_dist = max(max_dist, curr - prev);
            prev = curr;
        }
        max_dist = max(max_dist, (x - prev) * 2);
        cout << max_dist << endl;
    }
}
