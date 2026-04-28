// Codeforces Round 1095 (Div. 2)
// 2226 A. Disturbing Distribution

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
        int in;
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            if (in != 1)
                total += in;
        }
        if (in == 1)
            total++;
        cout << total % 676767677 << endl;
    }
}