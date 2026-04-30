// 2227. A. Koshary
// 10:46pm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << ((x % 2 == 0 || y % 2 == 0) ? "YES" : "NO") << endl;
    }
}

// accepted at 10:50pm (4 mins)