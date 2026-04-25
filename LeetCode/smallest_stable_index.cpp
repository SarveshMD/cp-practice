#include <bits/stdc++.h>
using namespace std;

int instabilityScore(vector<int> &nums, int index)
{
    return (*max_element(nums.begin(), nums.begin() + index) - *min_element(nums.begin() + index, nums.end()));
}

int firstStableIndex(vector<int> &nums, int k)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (instabilityScore(nums, i) <= k)
            return i;
    }
    return -1;
}

int main()
{
    // nums.length between 1 and 100 - O(n^2) works!

    vector<int> nums = {5, 0, 1, 4};
    cout << firstStableIndex(nums, 3);
}