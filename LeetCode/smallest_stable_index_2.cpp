#include <bits/stdc++.h>
using namespace std;

int firstStableIndex(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> max_dp(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max_dp[i] = nums[i];
        }
        else
        {
            max_dp[i] = max(max_dp[i - 1], nums[i]);
        }
    }
    vector<int> min_dp(n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            min_dp[i] = nums[i];
        }
        else
        {
            min_dp[i] = min(min_dp[i + 1], nums[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int stability = max_dp[i] - min_dp[i];
        if (stability <= k)
            return i;
    }
    return -1;
}

int main()
{
    // nums.length between 1 and 10^5 - O(n^2) won't work

    vector<int> nums = {5, 0, 1, 4};
    cout << firstStableIndex(nums, 3);
}