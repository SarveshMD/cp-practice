// 1807B. Grab the Candies

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
        int odd_sum = 0;
        int even_sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
                even_sum += a;
            else
                odd_sum += a;
        }
        cout << ((even_sum > odd_sum) ? "YES" : "NO") << endl;
    }
}