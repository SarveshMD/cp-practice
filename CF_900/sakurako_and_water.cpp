// 2033B. Sakurako and Water

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
        vector<int> diagonal_minimum(2 * n - 1, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
                if (a < 0)
                {
                    int dij = i - j + (n - 1);
                    diagonal_minimum[dij] = min(diagonal_minimum[dij], a);
                }
            }
        }
        int magic_count = 0;
        for (auto num : diagonal_minimum)
        {
            magic_count += num;
        }
        cout << magic_count * -1 << endl;
    }
}