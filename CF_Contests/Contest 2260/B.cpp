#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        long long res = 0;
        for (int i = 0; i < k; i++)
        {
            res += (y + i) % (y + i);
        }
        // k can be 10^12, so this doesn't work.
        // there's a simplification but I couldn't find it
        cout << "RES: " << res << endl;
    }
}
