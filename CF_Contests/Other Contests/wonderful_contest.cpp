// Contest 2222
// Spectral::Cup 2026 Round 1 (Codeforces Round 1094, Div. 1 + Div. 2)

// A - A Wonderful Contest

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int _ = 0; _ < test_cases; _++)
    {
        int n;
        cin >> n;
        int works = false;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 100)
            {
                works = true;
            }
        }
        cout << (works ? "Yes" : "No") << endl;
    }
}