#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int x;
        cin >> x;
        int y = 1;
        while (x)
        {
            y *= 10;
            x /= 10;
        }
        cout << y + 1 << endl;
        t--;
    }
}