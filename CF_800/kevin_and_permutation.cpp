// 1754B. Kevin and Permutation

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
        vector<int> perm(n);
        int j = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                perm[i] = j;
                j++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                perm[i] = j;
                j++;
            }
        }
        for (int i : perm)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}