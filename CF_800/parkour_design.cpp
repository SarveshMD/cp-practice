// CF 2202A. Parkour Design

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int _ = 0; _ < test_cases; _++)
    {
        long long qx, qy;
        cin >> qx >> qy;
        double Q = floor(qx - 2 * qy);
        bool test1 = (long long)(Q) % 3 == 0;
        bool test2 = max((long long)0, -1 * qy) <= (Q / 6);
        cout << ((test1 && test2) ? "YES" : "NO") << endl;
    }
}