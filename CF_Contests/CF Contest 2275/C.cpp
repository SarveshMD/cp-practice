// Codeforces Round 1125 (Div. 3)
// https://codeforces.com/contest/2275/problem/C
// C. Unrequited Love

#include <bits/stdc++.h>
using namespace std;

int fx(int y, vector<int> &nums)
{
    return nums[y] + nums[y + 2] - nums[y + 4];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        unordered_map<int, int> fy_map;
        long long res = 0;

        for (int y = 0; y + 4 < n; y++)
        {
            int fy = fx(y, nums);

            if (fy_map[fy] > 0)
                res += fy_map[fy];
            fy_map[fy]++;

            if (y - 2 >= 0 && fy == fx(y - 2, nums))
                res--;
            if (y - 4 >= 0 && fy == fx(y - 4, nums))
                res--;
        }

        cout << res << endl;
    }
}
