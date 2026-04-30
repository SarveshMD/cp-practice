// 2227. B. Party Monster
// 10:51pm

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
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            if (s == '(')
                x++;
            if (s == ')')
                y++;
        }
        cout << (x == y ? "YES" : "NO") << endl;
    }
}

// accepted at 10:57pm (6 mins)