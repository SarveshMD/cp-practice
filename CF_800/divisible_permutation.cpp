// 2188A. Divisible Permutation

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
        int a = (n / 2) + 1;
        for (int i = 0; i < n; i++)
        {
            a += i * (i % 2 == 0 ? 1 : -1);
            cout << a << " ";
        }
        cout << endl;
    }
}