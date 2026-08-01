#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool possible = true;
        if (n < 2 * m)
            possible = false;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (!possible)
        {
            cout << "NO" << endl;
            continue;
        }
        int n_a_smaller = 0;
        for (int i = 0; i < m; i++)
        {
            if (!(a[i] < b[i] && a[n - m + i] > b[i]))
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}