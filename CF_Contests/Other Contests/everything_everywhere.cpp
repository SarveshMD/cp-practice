// Codeforces Round 1095 (Div. 2)
// 2226 B. Everything Everywhere

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int good_subarrays = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (gcd(a[i], a[i + 1]) == abs(a[i] - a[i + 1]))
            {
                good_subarrays++;
            }
        }
        cout << good_subarrays << endl;
    }
}
