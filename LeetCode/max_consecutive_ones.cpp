#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int global_max = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i])
            curr++;
        else
            curr = 0;
        if (curr > global_max)
            global_max = curr;
    }
    return global_max;
}

int main()
{
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    cout << findMaxConsecutiveOnes(nums) << endl;
}