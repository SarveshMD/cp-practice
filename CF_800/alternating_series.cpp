// 2131. B. Alternating Series

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
        if (n == 2)
        {
            cout << "-1 2" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                cout << -1 << " ";
            else if (i == n - 1)
                cout << 2 << " ";
            else
                cout << 3 << " ";
        }
        cout << endl;
    }
}
