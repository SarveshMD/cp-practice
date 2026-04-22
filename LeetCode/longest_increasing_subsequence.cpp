#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++)
    {
        int max_upto_here = INT_MIN;
        for (int j = i; j >= 0; j--)
        {
            if (nums[i] > nums[j])
            {
                max_upto_here = max(max_upto_here, dp[j]);
            }
        }
        if (max_upto_here != INT_MIN)
        {
            dp[i] = max_upto_here + 1;
        }
    }
    // cout << "dp: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    // cout << endl;
    return *max_element(dp.begin(), dp.end());
}

int main()
{
    vector<int> a{10, 9, 2, 5, 3, 7, 101, 18};
    cout << lengthOfLIS(a) << endl;
    a = {1, 2, 3, 4, 5};
    cout << lengthOfLIS(a) << endl;
    a = {5, 4, 3, 2, 1};
    cout << lengthOfLIS(a) << endl;
    a = {10};
    cout << lengthOfLIS(a) << endl;
    a = {};
    cout << lengthOfLIS(a) << endl;
    a = {2, 2, 2, 2};
    cout << lengthOfLIS(a) << endl;
    a = {1, 2, 2, 3};
    cout << lengthOfLIS(a) << endl;
    a = {3, 1, 2, 2, 5, 2};
    cout << lengthOfLIS(a) << endl;
    a = {5, 1, 6, 2, 7, 3, 8, 4};
    cout << lengthOfLIS(a) << endl;
}