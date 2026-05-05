// 2225A. A Number Between Two Others

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        bool found = false;
        for (long long i = 2 * x; i < y; i += x)
        {
            if (y % i != 0)
            {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
}