// 1440B. Sum of Medians

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> arr(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> arr[i];
        }
        long long median_sum = 0;
        int skip = n / 2;
        int i = n * k;
        while (k > 0)
        {
            i -= (skip + 1);
            median_sum += arr[i];
            k--;
        }
        cout << median_sum << endl;
    }
}