#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    sort(nums.begin(), nums.end());
    vector<int> dp(n, 1);
    int prev = nums[0];
    for (int i=1; i<n; i++) {
        if (nums[i] == prev) {
            dp[i] = dp[i-1];
        }
        else if (nums[i] == prev+1) {
            dp[i] = dp[i-1]+1;
        }
        else {
            dp[i] = 1;
        }
        prev = nums[i];
    }
    int maxConsecutive = INT_MIN;
    for (int i=0; i<n; i++) {
        maxConsecutive = max(maxConsecutive, dp[i]);
    }
    return maxConsecutive;
}

int main() {
    vector<int> nums = {100,4,200,1,3,2, 201, 202, 102};
    cout << longestConsecutive(nums) << endl;
    nums = {0,3,7,2,5,8,4,6,0,1};
    cout << longestConsecutive(nums) << endl;
    nums = {1,0,1,2};
    cout << longestConsecutive(nums) << endl;
    nums = {};
    cout << longestConsecutive(nums) << endl;

}