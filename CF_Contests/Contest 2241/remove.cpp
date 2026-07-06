#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != s[i + 1])
                c++;
        }
        cout << ((c == 1) ? 2 : 1) << endl;
        tt--;
    }
}