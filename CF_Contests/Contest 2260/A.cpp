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
        vector<int> arr(n);
        int zeros_count = 0;
        int ones_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                zeros_count++;
            }
            if (arr[i] == 1)
            {
                ones_count++;
            }
        }
        if (n > 1 && zeros_count < 2)
        {
            cout << -1 << endl;
            continue;
        }
        int correct_aligned = 0;
        if (arr[0] == 0)
        {
            correct_aligned++;
        }
        if (arr[n - 1] == 0)
        {
            correct_aligned++;
        }
        cout << 2 - correct_aligned << endl;
    }
}
