// 2131. A. Lever

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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int sum = 1;
        for (int i = 0; i < n; i++)
        {
            int diff = a[i] - b[i];
            if (diff > 0)
                sum += diff;
        }
        cout << sum << endl;
    }
}