// https://codeforces.com/problemset/problem/1903/A
// A. Halloumi Boxes
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
        int n, k;
        cin >> n >> k;
        if (k >= 2)
        {
            int dummy;
            for (int i = 0; i < n; i++)
            {
                cin >> dummy;
            }
            cout << "YES" << endl;
        }
        else
        {
            int prev = INT_MIN;
            int curr;
            bool res = true;
            for (int i = 0; i < n; i++)
            {
                cin >> curr;
                if (curr < prev)
                    res = false;
                prev = curr;
            }
            cout << (res
                         ? "YES"
                         : "NO")
                 << endl;
        }
    }
}
